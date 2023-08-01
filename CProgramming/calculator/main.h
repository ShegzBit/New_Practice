#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define true 1
#define false 0

double (*opp(char op))(double, double);//d
double solve(double, double, char);
double add(double, double);//d
double sub(double, double);//d
double divd(double, double);//d
double mul(double, double);//d
int strin(char, char*);//d
int intin(int obj, int size, int *arr);
double strint(char *str);
int str_int(char *str);
int isnumeral(char);
double pow(double x, double y);

typedef long double lint;
typedef double (*func)(double, double);
typedef struct ops
{
    char op;
    double (*opt)(double, double);
}ops;

#endif