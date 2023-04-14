#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d ", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = array[i] + sum;
    }
    // printf("%d", sum);
    int arrayName[] = {1, 2, 3};
    printf("%d", arrayName[3]);

    return 0;
}