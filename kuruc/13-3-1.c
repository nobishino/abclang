#include <stdio.h>

int main(void)
{
    int a1[10];
    int a2[10];
    printf("sizeof a1 = %lu\n", sizeof(a1));
    printf("sizeof a1[0] = %lu\n", sizeof(a1[0]));
    printf("length of a1 = %lu\n", sizeof(a1) / sizeof(a1[0]));
    for (int i = 0; i < 10; i++)
    {
        printf("enter a number (%d/10)\n", i + 1);
        scanf("%d", &a1[i]);
    }

    for (int i = 9; i >= 0; i--)
    {
        printf("a[%d] = %d\n", i, a1[i]);
    }
    return 0;
}