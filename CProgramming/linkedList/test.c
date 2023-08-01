#include <stdio.h>

long long int rev_num(long long int num)
{
    long long int store = num, store2 = num, pV = 1, n_rev =0;

    if (num < 0)
    {
        num *= -1;
        store *= -1;
    }
    while (store > 9)
    {
        pV *= 10;
        store /= 10;
    }
    while (num > 0)
    {
        n_rev += (num % 10) * pV;
        num /= 10;
        pV /= 10;
    }
    if (store2 < 0)
        n_rev *= -1;
    printf("%lld -> %lld\n", store2, n_rev);
    return (n_rev);
}

int main()
{
    printf("____________________________________________________________________\n");
    printf("|__________________________________________________________________|\n");
    printf("|                                                                  |\n");                           
    printf("|                                                                  |\n");
    printf("|                                                                  |\n");
    printf("|==========================Hello Mariam============================|\n");
    printf("|Transaction Hisory:                                               |\n");
    printf("|                   Food and snacks: #2,000                        |\n");
    printf("|                   Travels: #22,420                               |\n");
    printf("|                   Transport: #13,000                             |\n");
    printf("|                   Health and Medical checkup: #15,000            |\n");
    printf("|                   Total Expenses: #52,420                        |\n");
    printf("|                                                                  |\n");
    printf("|                                                                  |\n");
    printf("|==================|Thank You for banking with us|=================|\n");
    printf("|__________________________________________________________________|\n");
}