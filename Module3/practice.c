#include <stdio.h>
int main()
{

    long long int N;
    long long int remaining;

    scanf("%lld", &N);

    if (N > 1000)
    {
        printf("I will buy Punjabi\n");
        remaining = N - 1000;

        if (remaining >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!");
    }

    return 0;
}