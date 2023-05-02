#include <stdio.h>

// global scope
int a = 50;

// fun function block scope
void fun()
{
    int s = 200;
    printf("Memory address address of fun %p\n", &s);
}
// main block scope
int main()
{
    int s = 100;
    printf("Memory address address of main %p\n", &s);
    fun();
    printf("%d", a);
    return 0;
}
