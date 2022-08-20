#include <stdio.h>

int main(void)
{
    int juice = 198;
    int milk = 138;
    int sum = (int)((juice + 2 * milk) * 1.05);
    printf("%05d\n", 1000 - sum);
    return 0;
}