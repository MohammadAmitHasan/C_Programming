#include <stdio.h>
int main()
{
    int n, a, even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (a < 0)
        {
            negative++;
        }
        else if (a > 0)
        {
            positive++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);

    return 0;
}