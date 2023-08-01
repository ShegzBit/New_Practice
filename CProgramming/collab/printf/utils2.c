#include "main.h"
/*it's not working let's continue*/

/**
 * print_int - prints an integer
 * @ap: pointer to integer
 * Return: legnth of integer
*/
int print_int(va_list ap)
{
	int i = va_arg(ap, int);

	return (put_int(i));
}

/**
 * print_per - prints percent
 * @ap: void pointer
 * Return: length of printed char = 1
*/
int print_per(va_list ap)
{
	(void) ap;
	return (_putchar('%'));
}

/**
 * put_int - prints integer
 * @num: number to be printed
 * Return: length of num
*/
int put_int(int num)
{
	(void)num;
	return (0);
}

/**
 * wrapper - wrapper of all print function into one
 * @ind: indicator for function to return
 * Return: pointer to appropiate print function
*/
print wrapper(char ind)
{
	int i;

	handle control[] = {
		{"s", print_str},
		{"i", print_int},
		{"c", print_char},
		{"b", print_bin},
		{"%", print_per},
		{NULL, NULL}
	};
	for (i = 0; control[i].spec != NULL; i++)
	{
		if (ind == control[i].spec[0])
			return (control[i].handler);
	}
	return (NULL);
}

/**
 * _strlen - calcs the len of s
 * @s: str of whose length to count
 * Return: strings length
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

