#include <stdio.h>
// we have called the function with memory location of x. It creates different memory location which contains the memory location of x
void fun(int *p)
{
    *p = 200;
}

int main()
{
    int x = 100;
    fun(&x);
    printf("Inside main %d %p", x, &x);
    return 0;
}