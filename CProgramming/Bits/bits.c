#include <stdio.h>

int main()
{
    int a = 10;
    return ((a & (1 << 4))  != 0);
}