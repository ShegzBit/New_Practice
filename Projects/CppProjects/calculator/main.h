#include <iostream>
#include <string>
#include <cstring>

typedef int (*func)(int, int);

int add(int, int);
int mul(int, int);
int divd(int, int);
int sub(int, int);
int mod(int, int);

func get_op_func(char *opp);

struct Excp_0
{
    int a;
    int b;
};

struct func_st
{
    std::string opp;
    func funcs;
};