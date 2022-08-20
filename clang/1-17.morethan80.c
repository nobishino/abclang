#include <stdio.h>

#define MAXLINE 1000
#define DISPLAY 30

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0)
        if (len > DISPLAY)
        {
            printf("%s", line);
        }
    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}