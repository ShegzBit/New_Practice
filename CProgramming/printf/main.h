#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

void _putchar(char);
int _puts(char *);
int _putint(int);
char *_intstr(int num);
char *revstr(char *);
char *determ(char *, int);
char *uintstr(unsigned int num);
int _putUint(int num);
char * dec_X(unsigned int, int);
int _putX(unsigned int hexnum);
int _put_x(unsigned int hexnum);
char *dec_Oct(unsigned int num);

int _printf(const char *, ...);

#endif