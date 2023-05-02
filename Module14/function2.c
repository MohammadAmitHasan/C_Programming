#include <stdio.h>
// return + parameter
int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    return a + b;
}
int sum2(void)
{

    return 5 + 6;
}

int main()
{
    int ans = sum();
    // This is not possible
    // int ans2 = sum2(5, 6);
    printf("%d\n", ans);

    return 0;
}
