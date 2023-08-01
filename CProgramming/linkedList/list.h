#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodePtr;

typedef union data
{
	int i_data;
	float f_data;
	char *s_data;
}data_t;

typedef struct node
{
	data_t data;
	nodePtr next;
} node;

void add_node(nodePtr head, nodePtr temp);
void free_list(nodePtr head);
nodePtr list_rev(nodePtr head);
void add_data(nodePtr head, int data);
int print_list(nodePtr head);


#endif
