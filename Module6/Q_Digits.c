#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        int t;
        scanf("%d", &t);

        int flex = t;
        do
        {
            printf("%d ", flex % 10);
            flex = flex / 10;
        } while (flex > 0);
        printf("\n");
    }

    return 0;
}