#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    scanf("%s %s", str1, str2);

    int i = 0;

    while (1)
    {
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            printf("\nStrings are equal");
            break;
        }
        else if (str1[i] == '\0')
        {
            printf("String1 is smaller.");
            break;
        }
        else if (str2[i] == '\0')
        {
            printf("String2 is smaller.");
            break;
        }
        if (str1[i] == str2[i])
        {
            i++;
        }
        else if (str2[i] > str1[i])
        {
            printf("String1 is smaller.");
            break;
        }
        else
        {
            printf("String2 is smaller.");
            break;
        }
    }

    int compare = strcmp(str1, str2);

    if (compare > 0)
    {
        printf("\nString2 is smaller");
    }
    else if (compare < 0)
    {
        printf("\nString1 is smaller");
    }
    else
    {
        printf("\nStrings are equal");
    }

    return 0;
}