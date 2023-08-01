#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

typedef int (*func_p)(va_list);

func_p func_pick(char *s);

int _printf(const char *format, ...);
int _putchar(char);
int _puts(char *);
int _strlen(char *);
int _const_strlen(const char *);

int print_str(va_list ap);
int print_char(va_list ap);
int print_per(va_list ap);

typedef struct func_struct
{
    char *s;
    func_p func;
} func_struct;

#endif