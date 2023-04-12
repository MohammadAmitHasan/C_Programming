#include <stdio.h>
#include <limits.h>
int main()
{
    int n, a, maximum = INT_MIN;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a > maximum)
        {
            maximum = a;
        }
    }

    printf("%d\n", maximum);

    return 0;
}