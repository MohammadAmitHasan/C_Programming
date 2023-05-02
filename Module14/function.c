#include <stdio.h>
// return + parameter
int sum(int x, int y)
{
    return x + y;
}
int deduct(int x, int y);

int main()
{
    int ans = sum(5, 6);
    int ans2 = deduct(5, 6);
    printf("%d\n", ans);
    printf("%d", ans2);
    return 0;
}
int deduct(int x, int y)
{
    return x - y;
}