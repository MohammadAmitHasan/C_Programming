#include <stdio.h>
int main()
{
    int a = 70;
    // take pointer variable
    int *p = &a;
    printf("%d %p %p\n", a, &a, p);

    // change the value
    *p = 500;
    printf("%d %p", a, p);

    return 0;
}