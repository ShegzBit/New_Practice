#ifndef _MAIN_H_
#define _MAIN_H_

/*Libraries*/
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef int (*func)(va_list ap);

typedef struct spec_t
{
	char *s;
	int (*func)(va_list ap);
} spec_t;

/*Speci handlers*/
int _putchar(char c);
int _puts(char *s);
int _printf(const char *format, ...);

/*Main print handle*/
int print_char(va_list ap);
int print_str(va_list ap);
int print_per(va_list ap);

#endif /*_MAIN_H*/
