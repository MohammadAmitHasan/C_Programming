#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    int first, second;

    first = a / 10;
    second = a % 10;

    if (second == 0)
    {
        printf("YES\n");
    }

    else if (first % second == 0 || second % first == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}