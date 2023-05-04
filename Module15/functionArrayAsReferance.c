#include <stdio.h>
void fun(int *arr, int n)
{
    // it will change the value of main block as it is pointer
    arr[2] = 700;
}

int main()
{
    int arr[6] = {67, 87, 90, 54};

    fun(arr, 4);

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}