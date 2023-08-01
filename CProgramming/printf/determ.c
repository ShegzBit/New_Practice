#include "main.h"

char *determ(char *str, int size)
{
    int i;
    char *ret;
    if (str[0] == '\0')
    {
        ret = malloc(size * sizeof(char));
        if (ret == (NULL)) return (NULL);
        i = 0;

        while (i < size)
        {
            ret[i] = str[i + 1];
            i++;
        }
        ret[i] = '\0';
        str = ret;
    }
    return(str);
}