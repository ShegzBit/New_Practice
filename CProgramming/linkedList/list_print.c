#include "list.h"

int print_list(nodePtr head)
{
    int retval = 0;

    while(head != NULL)
    {
        printf("%d->", head->data.i_data);
        retval++;
        head = head->next;
    }
    return (retval);
}