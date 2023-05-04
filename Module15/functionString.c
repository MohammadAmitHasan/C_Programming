#include <stdio.h>
#include <string.h>
// void fun(char str[])
void fun(char *str)
{
    printf("%s\n", str);
    printf("%d", strlen(str));
}

int main()
{
    char str[100] = "Hello";
    fun(str);
    return 0;
}