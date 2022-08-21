#include <stdio.h>

int main(void)
{
    int score;
    do
    {
        printf("enter your score:\n");
        scanf("%d", &score);
    } while (score < 0 || score > 100);

    printf("score is %3d\n", score);
    return 0;
}