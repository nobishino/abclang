#include <stdio.h>

int main()
{
    int b = 0;
    char c;
    while (c != EOF)
    {
        c = getchar();
        b = (c != EOF);
        printf("(getchar() != EOF) == %d\n", b);
    }
}