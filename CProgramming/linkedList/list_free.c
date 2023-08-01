#include "list.h"

void free_list(nodePtr head)
{
    /**
     * loop through list head
     * free all memory alloced on heap
     * terminate loop at head is null
    */
   while (head != NULL)
   {
        free(head);
        head = head->next;
   }
}