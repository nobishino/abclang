#include <stdio.h>

void olympic(int year);
char *olympic_msg(int year);

int main(void)
{
    int year;
    printf("enter the year:\n");
    scanf("%d", &year);
    olympic(year);
    printf("%s\n", olympic_msg(year));
}

void olympic(int year)
{
    if (year % 4 == 0)
    {
        printf("Summar Olympic\n");
    }
    else if (year % 2 == 0)
    {
        printf("Winter Olympic\n");
    }
    else
    {
        printf("No Olympic\n");
    }
}

char *olympic_msg(int year)
{
    // return "message";
    char msg[100];
    msg[0] = 'H';
    msg[1] = '\0';
    return msg;
}