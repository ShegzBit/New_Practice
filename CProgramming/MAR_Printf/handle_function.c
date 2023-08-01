#include "main.h"

int _puts(char *s);
int _putchar(char c);

int _putchar(char c)
{
	return (write(1, &c, 1));
}
