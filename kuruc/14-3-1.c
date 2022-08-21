#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main(void)
{
    char first_name[MAX_LENGTH];
    char last_name[MAX_LENGTH];
    printf("your first name?\n");
    scanf("%s", first_name);
    printf("your last name?\n");
    scanf("%s", last_name);
    printf("your full name is: %s %s\n", first_name, last_name);
    return 0;
}