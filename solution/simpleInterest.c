#include <stdio.h>

double simInt(int pr, int rt, int tm)
{
    int retval, ret;
    ret = pr * rt * tm;
    printf("first step: %d * %d * %d = %d\n", pr, rt, tm, ret);
    retval = ret / 100;
    printf("second step: %d / 100 = %d\n", ret, retval);
    return (retval);
}

int main()
{
    while(1)
    {
        printf("enter the principal rate and Time to get the SI: ");
        int pr, rt, tm;
        scanf("%d %d %d", &pr, &rt, &tm);

        if (pr < 0 || rt < 0 || tm < 0) { printf("Application closed"); return (0);}
        putchar('\n');
        int print = simInt(pr, rt, tm);
        printf("the simple interest is %d\n", print);
        char choice;
    }
    return(0);
}