#include <stdio.h>

int main(void)
{
    int year;
    printf("enter year in interger:\n");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("Summar olympic");
    }
    if (year % 4 == 2)
    {

        printf("Winter olympic");
    }
    if (year % 2 != 0)
    {
        printf("No olympic");
    }
    return 0;
}