#include <stdio.h>

int main()
{
    int n = 0;
    char c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t' || c == '\n' || c == ' ')
            n++;
    }
    printf("%d\n", n);
}