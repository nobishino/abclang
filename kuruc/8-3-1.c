#include <stdio.h>

int main(void)
{
    int month;
    printf("enter month\n");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("Mutsuki\n");
        break;
    case 2:
        printf("Kisaragi\n");
        break;
    case 3:
        printf("Yayoi\n");
        break;
    case 4:
        printf("Utsuki\n");
        break;
    case 5:
        printf("Satsuki\n");
        break;
    case 6:
        printf("Minazuki\n");
        break;
    case 7:
        printf("Fumizuki\n");
        break;
    case 8:
        printf("Hazuki\n");
        break;
    case 9:
        printf("Nagatsuki\n");
        break;
    case 10:
        printf("Kannazuki\n");
        break;
    case 11:
        printf("Simotsuki\n");
        break;
    case 12:
        printf("Shiwasu\n");
        break;
    default:
        printf("no such month\n");
        break;
    }
    return 0;
}