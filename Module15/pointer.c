#include <stdio.h>
int main()
{
    int x = 100;
    int *ptr = &x;
    printf("address %p\n", ptr);
    printf("value %d\n", x);
    printf("address of ptr %d\n", &ptr);
    printf("size of ptr memory %d\n", sizeof(ptr));

    x = 200;

    int *ptr2 = ptr;
    // print value of the memory
    printf("value %d\n", *ptr2);

    printf("value %p %p\n", ptr, ptr2);

    return 0;
}