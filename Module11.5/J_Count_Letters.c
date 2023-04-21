#include <stdio.h>
#include <string.h>

int main()
{
    int counterArray[26] = {0};

    char c;
    while (scanf("%c", &c) != EOF)
    {
        counterArray[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (counterArray[i] != 0)
        {
            printf("%c : %d\n", i + 'a', counterArray[i]);
        }
    }

    return 0;
}
