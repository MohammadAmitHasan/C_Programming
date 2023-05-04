#include <stdio.h>
// when we return a value all the memory of that function are being cleared
// we have to provide the size as it is raw array pointer. Main scope has [5] track of how much data it has
// void arrayFun(int arr[], int size)
void arrayFun(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int array[4] = {6, 8, 90, 56};
    arrayFun(array, 4);
    return 0;
}