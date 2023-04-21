#include <stdio.h>
#include <string.h>
int main()
{
    char str1[7] = "Apple";
    char str2[7] = "Orange";
    char str3[7] = "Orange";

    for (int i = 0; i < strlen(str2); i++)
    {
        str1[i] = str2[i];
    }
    printf("%s", str1);
    printf("%s", strcpy(str3, str2));

    return 0;
}