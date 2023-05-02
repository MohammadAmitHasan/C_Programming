#include <stdio.h>
int main()
{
    int k, n;
    scanf("%d %d", &n, &k);

    for (int j = 0; j < k; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}