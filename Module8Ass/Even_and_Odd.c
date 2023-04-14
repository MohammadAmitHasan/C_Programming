#include <stdio.h>
int main()
{
    int n, odd = 0, even = 0;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            even += v[i];
        }
        else
        {
            odd += v[i];
        }
    }

    printf("%d %d", even, odd);

    return 0;
}