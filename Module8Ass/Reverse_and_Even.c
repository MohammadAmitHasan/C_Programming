#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (n % 2 == 0)
    {
        n = n - 1;
    }

    for (int i = n - 1; i >= 0; i -= 2)
    {
        printf("%d ", a[i]);
    }

    return 0;
}