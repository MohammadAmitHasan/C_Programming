#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int sp = n - 1, st = 1;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= st; j++)
        {
            printf("*");
        }

        if (i > n - 1)
        {
            sp++;
            st -= 2;
        }
        else
        {
            sp--;
            st += 2;
        }

        printf("\n");
    }

    return 0;
}