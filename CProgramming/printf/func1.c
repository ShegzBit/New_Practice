#include "main.h"
#include <stdlib.h>

void _putchar(char x)
{
    write(1, &x, sizeof(char));
}

int _puts(char *str)
{
    unsigned int ret = strlen(str);
    write(1, str, ret);
    return(ret);
}

int _putint(int n)
{
    unsigned int ret;
    char *str = _intstr(n);
    _puts(str);
    ret = strlen(str);
    if(str != "0") free(str);
    return(ret);
}

int _putUint(int num)
{
    char *str = uintstr(num);
    unsigned int ret = strlen(str);
    _puts(str);
    if(str != "0") free(str);
    return(ret);
}

int _putX(unsigned int hexnum)
{
    char *str = dec_X(hexnum, 1);
    unsigned int ret = strlen(str);
    _puts(str);
    if (str != "0")
    {
        free(str);
    }
    return(ret);
}

int _put_x(unsigned int hexnum)
{
    char *str = dec_X(hexnum, 0);
    unsigned int ret = strlen(str);
    _puts(str);
    if (str != "0")
    {
        free(str);
    }
    return(ret);
}