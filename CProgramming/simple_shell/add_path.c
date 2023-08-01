#include "main.h"

typedef struct list_t
{
	char *data;
	struct list_t *next;
} list_t;

char *_getenv(char *, char **);

void push_back(list_t **head, char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	temp->data = str;
	temp->next = *head;
	*head = temp;
}

void add_path()
{
	extern char **environ;
	list_t *head = NULL;
	char *str = _getenv("PATH", environ);
	char *store = strtok(str, "/\n");
	while (store)
	{
		push_back(&head, store);
		store = strtok(NULL, "/\n");
	}

	while (head != NULL)
	{
		printf("%s/\n", head->data);
		head = head->next;
	}
}

int main()
{
	add_path();
}

