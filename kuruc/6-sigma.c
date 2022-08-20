#include <stdio.h>

int main(void)
{
    int min, max;
    scanf("%d,%d", &min, &max);
    printf("sum from %d to %d = %d\n", min, max, ((min + max) * (max - min + 1)) / 2);
    return 0;
}