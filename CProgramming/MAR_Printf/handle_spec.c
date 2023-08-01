#include "main.h"

func *handle_speci(char *str)
{
	/* "This is a char %r", 'A' */
	spec_t handlers[] = {
		{"s", print_str},
		{"c", print_char},
		{"%", print_per},
		{NULL, NULL}
	}
	int i;

	for (i = 0; handlers[i].s != NULL; i++)
	{
		if (handlers[i].s[0] == str[0])
			return (handlers[i].func);
	}
	return (NULL);
}
