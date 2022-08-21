#include <stdio.h>

int max(int xs[]);

int main(void)
{
    int inputs[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &inputs[i]);
        if (inputs[i] == -1)
            break;
    }
    int ans;
    ans = max(inputs);

    printf("max value = %d\n", ans);

    return 0;
}

int max(int xs[])
{
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        int x = xs[i];
        if (x == -1)
            break;
        if (x > ans)
            ans = x;
    }
    return ans;
}