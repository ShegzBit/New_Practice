#include "main.h"

int _printf(const char *format, ...);

int _printf(const char *format, ...)
{
	/**
	 * print this statemant
	 * ptr -> print this statemant
	 * print this %ctatement, 's'
	 * */
	va_list ap;
	int retval = 0, i;
	func speci_func;

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		/* "This is a char %c", 'A' */
		if (format[i] == '%')
		{
			speci_func = handle_speci(format + i + 1);
			if (speci_func != NULL)
				retval += speci_func(ap);
			else
				retval += _putchar(format[i]);
		}
		else
			retval += _putchar(format[i]);
	}
	return (retval);
}
