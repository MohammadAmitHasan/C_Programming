#include <stdio.h>
#include <limits.h>
int main()
{
    int n, max = INT_MIN, min = INT_MAX, maxIndex, minIndex;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            maxIndex = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            minIndex = i;
        }
    }

    int temp = a[maxIndex];
    a[maxIndex] = a[minIndex];
    a[minIndex] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}