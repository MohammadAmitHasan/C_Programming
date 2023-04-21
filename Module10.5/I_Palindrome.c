#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001], new[1001] = "";
    int isPalindrome = 1;

    scanf("%s", &s);
    int j = strlen(s) - 1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != s[j])
        {
            isPalindrome = 0;
            break;
        }
        j--;
    }
    if (isPalindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}