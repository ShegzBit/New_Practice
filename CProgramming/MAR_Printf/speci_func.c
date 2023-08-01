#include "main.h"

int print_char(va_list ap);
int print_str(va_list ap);
int print_per(va_list ap);

int print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	return (_putchar(c));
}
