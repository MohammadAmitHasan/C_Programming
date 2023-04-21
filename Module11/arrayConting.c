#include <stdio.h>
int main()
{
    int length;
    scanf("%d", &length);
    int arr[length];

    int countArray[101] = {0};

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < length; i++)
    {
        int val = arr[i];
        countArray[val]++;
    }
    for (int i = 0; i < 101; i++)
    {
        printf("%d - %d \n", i, countArray[i]);
    }

    return 0;
}