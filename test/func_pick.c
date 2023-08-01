#include "main.h"

func_p func_pick(char *s)
{
    int i;
    func_struct control[] ={
        {"s", print_str},
        {"c", print_char},
        {"%", print_per},
        {NULL, NULL}
    };
    for (i = 0; control[i].s != NULL; i++)
    {
        if (s[0] == control[i].s[0])
            return (control[i].func);
    }
    return (NULL);
}