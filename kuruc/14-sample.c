#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char c = 'A';
    int i = c;
    printf("%d\n", i);

    char str[] = "Hello";
    printf("sizeof str = %lu, length = %lu\n", sizeof(str), sizeof(str) / sizeof(str[0]));

    char num[] = "123";
    printf("number = %d\n", atoi(num));

    strcpy(str + 2, "hh");
    printf("%s, %d\n", str, str[4]);

    char dest[5];
    dest[4] = 1;
    sprintf(dest, "abcd");
    printf("%lu, %d\n", sizeof(dest), dest[4]);

    scanf("%4s", dest);
    printf("%s\n", dest);

    return 0;
}