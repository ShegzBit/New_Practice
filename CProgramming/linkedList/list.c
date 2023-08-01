#include "list.h"

int main()
{
    nodePtr head = malloc(sizeof(node));
    nodePtr reved_list = malloc(sizeof(node));
    head->next = NULL;
    add_data(head, 5);
    add_data(head, 10);
    add_data(head, 12);
    add_data(head, 15);
    add_data(head, 17);
    print_list(head);

    reved_list = list_rev(head);
    print_list(reved_list);
    return (0);
}