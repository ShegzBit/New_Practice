#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: A character string
 *
 * Description: writes output to the standard output stream
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	const char *ptr;
	int retval = 0, i;
	va_list ap;
	print func;

	va_start(ap, format);
	ptr = format;

	for (i = 0; ptr[i]; i++)
	{
		if (ptr[i] != '%')
		{
			retval += _putchar(ptr[i]);
			continue;
		}

		/* this is %c */
		func = wrapper(ptr[++i]);
		if (func != NULL)
		{
			retval += func(ap);
		}
	}

	va_end(ap);
	return (retval);
}
