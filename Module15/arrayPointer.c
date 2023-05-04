
#include <stdio.h>
int main()
{
    int arr[5] = {5, 6, 7};
    // provides same address as array is a pointer
    printf("address %p %p\n", &arr[0], arr);

    // provides same value of the first position of the array
    printf("address %d %d\n", arr[0], *arr);
    // so *arr == &arr[0]

    // +1 means next address
    printf("address %d %d %d %d", arr[1], *(arr + 1), 1 [arr], *(1 + arr));

    // when we write arr[1] c access it by *(arr + 1). So when we write 1[arr] c access *(1 + arr). So same value comes

    return 0;
}