#include <stdio.h>

void calc(int xs[], int *max, int *min);

int main(void)
{
    int inputs[10];
    int max, min;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &inputs[i]);
        if (inputs[i] == -1)
            break;
    }

    calc(inputs, &max, &min);

    printf("max value = %d\n", max);
    printf("min value = %d\n", min);

    return 0;
}

void calc(int xs[], int *max, int *min)
{
    *max = -1;
    *min = 10000;
    for (int i = 0; i < 10; i++)
    {
        int x = xs[i];
        if (x == -1)
            break;
        if (x > *max)
            *max = x;
        if (x < *min)
            *min = x;
    }
    return;
}