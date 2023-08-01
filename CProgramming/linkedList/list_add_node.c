#include "list.h"

void add_data(nodePtr head, int data)
{
    /*Declare neccessary pointers*/
    nodePtr temp = NULL;

    /*create a node temp for the new data*/
    temp = malloc(sizeof(node));
    head->next = NULL;

    /*store the current value of head in temp next and then add the data*/
    temp->next = head;
    temp->data.i_data = data;
    
    /*now equate node to temp to carry the new list*/
    head = temp;
    printf("%d->", head->data.i_data);
}

void add_node(nodePtr head, nodePtr temp)
{
    /*store the current value of head in temp next and then add the data*/
    temp->next = head;    
    /*equate node to temp to carry the new list*/
    head = temp;
}