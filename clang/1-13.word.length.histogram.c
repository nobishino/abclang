#include <stdio.h>

#define MAX_LENGTH 100

int main()
{
    char c;
    int histogram[MAX_LENGTH];
    for (int i = 0; i < MAX_LENGTH; i++)
        histogram[i] = 0;
    int current = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            histogram[current]++;
            current = 0;
        }
        else
        {
            current++;
        }
    }
    for (int i = 0; i < MAX_LENGTH; i++)
    {
        printf("word with length of %d: %d\n", i, histogram[i]);
    }
    return 0;
}
