#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct ListNode
{
	int data;
	struct ListNode *next;
} ListNode;

void addNode(ListNode **head, int data)
{
	ListNode *tmp = malloc (sizeof(ListNode));
	tmp->data = data;

	tmp->next = *head;
	*head = tmp;
}

bool hasCycle(ListNode *head)
{
	 ListNode *tmp = head, *store = head;

        if (head == NULL)
            return (0);
        while (tmp != NULL && store != NULL)
        {
            if (store->next == NULL || store->next->next == NULL)
                return (0);
                tmp = tmp->next;
                store = store->next->next;

                if (tmp == store)
                        return (1);
        }
        return (0);
}
int main()
{
	ListNode *tmp, *head = NULL/*malloc(sizeof(ListNode))*/, *node = NULL;
	int i, data = 20;


	for (i = 0; i < 5; i++)
	{
		addNode(&head, i);
	}
	
	/*tmp = malloc (sizeof(ListNode));
        tmp->data = data;
        tmp->next = head;
        head->next = tmp;*/

	for (; head != NULL; head = head->next)
        {
		printf("head->data = %d\n", head->data);
        }

		return (hasCycle(node));
}
