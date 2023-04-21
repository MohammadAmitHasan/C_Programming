#include <stdio.h>
#include <string.h>
int main()
{
    char a[100] = "Hasan is a web developer";
    int count = 0;

    while (a[count] != '\0')
    {
        count++;
    }
    printf("%d\n", count);
    int stringLength = strlen(a);
    printf("%d", stringLength);
    return 0;
}