#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    int vowels = 0;
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++)
    {
        switch (str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vowels++;
            break;
        }
    }
    printf("%d", vowels);

    return 0;
}