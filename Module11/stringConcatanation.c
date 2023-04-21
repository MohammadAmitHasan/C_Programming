#include <stdio.h>
#include <string.h>
int main()
{
    char a[100] = "Order";
    char b[10] = "Manage";
    int k = strlen(a);
    for (int i = 0; i < 3; i++)
    {
        a[k] = b[i];
        k++;
    }
    printf("%s", a);
    printf("\n%s", strcat(a, b));

    return 0;
}