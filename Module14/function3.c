#include <stdio.h>
// no return + parameter
// void must be given
void sum(int x, int y)
{
    printf("%d", x + y);
}

int main()
{
    sum(5, 6);
    return 0;
}
