#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    char digit;

    // read input
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &digit);
        sum += digit - '0';
    }

    // print output
    printf("%d\n", sum);

    return 0;
}
