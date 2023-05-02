#include <stdio.h>
// no return + no parameter
void sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a + b);
}

int main()
{
    sum();
    return 0;
}
