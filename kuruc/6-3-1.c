#include <stdio.h>

int main(void)
{
    int price;
    printf("enter integer number:\n");
    scanf("%d", &price);
    printf("10 percents off = %d\n", (int)(price * 0.9));
    printf("30 percents off = %d\n", (int)(price * 0.7));
    printf("50 percents off = %d\n", (int)(price * 0.5));
    printf("80 percents off = %d\n", (int)(price * 0.2));
    return 0;
}