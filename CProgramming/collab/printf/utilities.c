#include "main.h"
#include <stdio.h>

/**
 * _putchar - prints a char
 * @c: char to print
 * Return: char length = 1;
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _puts - prints a string
 * @s: str to print
 * Return: str length
*/
int _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i++]);
	}
	return (_strlen(s));
}

/**
 * print_char - _putchar wrapper
 * @ap: pointer to char
 * Return: length of printed char = 1
*/
int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	return (_putchar(c));
}

/**
 * print_str - _puts wrapper
 * @ap: pointer to str
 * Return: length of printed str
*/
int print_str(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);

	return (_puts(str));
}
