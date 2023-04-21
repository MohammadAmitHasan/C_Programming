#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    gets(name);
    printf("%s", name);

    char name2[200];
    // fgets is standard and it takes enter as well
    fgets(name2, 100, stdin); // variable name, limit, standard input
    printf("\n%s", name2);

    // Means in 17th postion there will be a null and the code will execute
    name2[17] = "\0";

    char a = '8';
    printf("%d", a - '0');

    return 0;
}
