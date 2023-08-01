#include "main.h"

int _putchar (char c)
{
    char *ptr = &c;
    write(1, ptr, 1);
    return (1);
}

int _puts(char *s)
{
    int i, retval = 0;
    for (i = 0, retval = 0; s[i] != '\0'; i++)
    {
        retval += _putchar(s[i]);
    }
    return (retval);
}

int _strlen(char *s)
{
    int i;
    //strlen
    for (i = 0; s[i] != '\0'; i++);
    return (i);
}