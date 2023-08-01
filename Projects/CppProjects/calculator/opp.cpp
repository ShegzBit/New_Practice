#include "main.h"

int add(int a, int b)
{
    return (a + b);
}

int sub(int a, int b)
{
    return (a - b);
}

int mul(int a, int b)
{
    return (a * b);
}

int divd(int a, int b)
{
    if (b == 0)
    {
        Excp_0 zero;
        zero.a = a;
        zero.b = b;
        throw zero;
    }
    return (a / b);
}

int mod(int a, int b)
{
    if (b == 0)
    {
        Excp_0 zero;
        zero.a = a;
        zero.b = b;
        throw zero;
    }
    return (a % b);
}
