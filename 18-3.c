#include <stdio.h>

typedef enum
{
    SUMMER,
    WINTER,
    NO,
} olympic;

olympic calc(int year);

int main(void)
{
    int year;
    printf("enter the year:\n");
    scanf("%d", &year);
    olympic o = calc(year);
    switch (o)
    {
    case SUMMER:
        printf("SUMMER");
        break;
    case WINTER:
        printf("WINTER");
        break;
    default:
        printf("No Olympic this year");
        break;
    }
    return 0;
}

olympic calc(int year)
{
    if (year % 4 == 0)
        return SUMMER;
    if (year % 2 == 0)
        return WINTER;
    return NO;
}