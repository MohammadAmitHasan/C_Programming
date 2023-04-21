#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int lowestNumber = a[0];
    int postion = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < lowestNumber)
        {
            lowestNumber = a[i];
            postion = i + 1;
        }
    }
    printf("%d %d", lowestNumber, postion);
    return 0;
}