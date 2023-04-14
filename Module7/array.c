#include <stdio.h>
int main()
{
    int array[5];
    // The first cell name will be array name only to identify the array location.
    // It will create 5 variables named array[0] to array [4].
    // Array data are stored serially in memory.
    // If array[0] stores in 410 array[1] will be in 414 as int takes 4 bytes. When we try to access Array[0] it will find through the name Array location which is 410 and index number 410+0 = 410. When we try to access the array[3] the location will be 410+3*4=422.

    for (int i = 0; i < 5; i++)
    {
        scanf("%d\n", &array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    int array2[3];
    array2[0] = 100;
    printf("%d ", array2[0]);

    int array3[3] = {45, 78, 7};
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", array3[i]);
    }

    return 0;
}