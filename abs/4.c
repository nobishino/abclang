#include <stdio.h>

int count_log_2(int x);

int main()
{
    int n;
    int a[200];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ans = 1000000000;
    for (int i = 0; i < n; i++)
    {
        int v = count_log_2(a[i]);
        // printf("v = %d\n", v);
        if (v < ans)
        {
            ans = v;
        }
    }
    printf("%d\n", ans);
}

int count_log_2(int x)
{
    int result = 0;
    while (x % 2 == 0 && x > 0)
    {
        result++;
        x = x >> 1;
    }
    return result;
}