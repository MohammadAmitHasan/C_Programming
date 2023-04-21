#include <stdio.h>
int main()
{
    char a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%c", a[i]);
    }
    // sizeof() function returns the size
    printf("%d", sizeof(a));
    printf("%d", sizeof(int));
    printf("%d", sizeof(long long int));

    return 0;
}