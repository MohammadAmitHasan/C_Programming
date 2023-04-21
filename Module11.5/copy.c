#include <stdio.h>

int main()
{
    int n, m, i, num;
    scanf("%d %d", &n, &m);

    int count[m + 1];
    for (int i = 0; i <= m; i++)
    {
        count[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        count[num]++;
    }

    for (i = 0; i <= m; i++)
    {
        if (count[i] != 0)
        {
            printf("%d\n", count[i]);
        }
    }

    return 0;
}