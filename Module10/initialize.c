#include <stdio.h>
int main()
{
    char a[5] = {'h', 'a', 's', 'n'};
    // \0 means end of the string
    char name[6] = "Hasan\0";
    // Automatic null will be there
    char name2[6] = "Hasan";
    printf("\n%s", name);
    printf("\n%s", name2);

    char str[5];
    // We can not take space with scanf
    scanf("%s", &str);
    printf("\n%s", str);

    return 0;
}