#include <stdio.h>
// we have called the function with value x. It creates different memory location for the parameter.
void fun(int x)
{
    x = 200;
}

int main()
{
    int x = 100;
    fun(x);
    printf("Inside main %d %p", x, &x);
    return 0;
}