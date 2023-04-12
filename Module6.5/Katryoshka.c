#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int toy = 0, toy2 = 0;
    int eye;

    if (a >= 1 && b >= 1 && c >= 1)
    {
        if (a < c && a < b)
        {
            toy2 = a;
            a = 0;
            b = b - a;
            c = c - a;
        }
        else if (b < a && b < c)
        {
            toy2 = b;
            a = a - b;
            c = c - b;
            b = 0;
        }
        else
        {
            toy2 = c;
            b = b - c;
            a = a - c;
            c = 0;
        }
        }

    // First case
    if (a >= 2 && c >= 1)
    {
        eye = a / 2;

        if (eye > c)
        {
            toy = c;
        }
        else
        {
            toy = eye;
        }
    }

    printf("%d", toy + toy2);

    return 0;
}