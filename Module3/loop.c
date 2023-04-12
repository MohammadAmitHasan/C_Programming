#include <stdio.h>

int main()
{

    // For loop
    printf("For loop ");
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            continue;
        }

        printf("%d", i);
    }

    // while loop
    printf("\nWhile loop ");
    int j = 0;
    while (j < 5)
    {
        if (j == 3)
        {
            break;
        }

        printf("%d", j);
        j++;
    }

    // Do while loop
    printf("\nDo While loop ");
    int k = 0;
    do
    {
        k++;
        printf("%d", k);
    } while (k < 5);

    return 0;
}