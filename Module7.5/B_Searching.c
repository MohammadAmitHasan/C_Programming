#include <stdio.h>
int main()
{
    int n, x, position = -1;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            position = i;
            break;
        }
    }

    printf("%d", position);

    return 0;
}