#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

typedef int (*print)(va_list ap);

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int print_char(va_list ap);
int print_str(va_list ap);
int _strlen(char *s);
int _puts(char *s);
int _putchar(char c);
int put_int(int num);
int print_int(va_list ap);
int print_per(va_list ap);
print wrapper(char);
char *int_bin(unsigned int num);
int print_bin(va_list ap);
char *dec_bin(unsigned int num);

typedef struct handle
{
    char *spec;
    print handler;
} handle;



#endif /* _MAIN_H_ */