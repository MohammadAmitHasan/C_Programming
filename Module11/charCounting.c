#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];

    scanf("%s", str);

    int countingArray[26] = {0};

    for (int i = 0; i < strlen(str); i++)
    {
        int charAsciValue = str[i] - 'a';
        countingArray[charAsciValue]++;
    }
    for (int i = 0; i < strlen(str); i++)
    {
        // if (countingArray[i] != 0)
        // {
        //     printf("%c - %d\n", i + 'a', countingArray[i]);
        // }

        printf("%c - %d\n", str[i], countingArray[str[i] - 97]);
    }

    return 0;
}