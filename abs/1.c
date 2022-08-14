#include <stdio.h>

int main()
{
    int a, b, c;
    char s[999];
    scanf("%d%d%d%s", &a, &b, &c, s);
    printf("%d %s", a + b + c, s);
}