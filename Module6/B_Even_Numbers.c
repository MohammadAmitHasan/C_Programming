#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n == 1)
    {
        /* code */
        printf("-1\n");
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        /* code */
    }

    return 0;
}