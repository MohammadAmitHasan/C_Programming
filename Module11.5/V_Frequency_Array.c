#include <stdio.h>
int main()
{
    int n, m, a;
    scanf("%d %d", &n, &m);

    int counter[m + 1];
    for (int i = 0; i <= m; i++)
    {
        counter[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        counter[a]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", counter[i]);
    }

    return 0;
}