#include "list.h"

nodePtr list_rev(nodePtr head)
{
    /*Declare the series of pointer to be used*/
    nodePtr rev_head = NULL;

    rev_head = malloc(sizeof(node));
    /**
     * create a new list loop through the list passed then add each node
     * to the front of a new node to store it in reverse
     */
    rev_head->next = NULL;
    while (head != NULL)
    {
        add_node(rev_head, head);
        head = head->next;
        putchar('e');
    }
    /*free the previous list and store the pointer to the new list in the head*/
    free_list(head);
    head = rev_head;
    return (rev_head);
}