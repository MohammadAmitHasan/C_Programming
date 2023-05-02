#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);

    int counterArray[26] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        counterArray[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 'a', counterArray[i]);
    }

    return 0;
}