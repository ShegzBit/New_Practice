#include "main.h"

func get_op_func(char *opp)
{
    func_st controls[] = {
        {"+", add},
        {"-", sub},
        {"x", mul},
        {"/", divd},
        {"*", mul},
        {"%", mod},
    };
    for (auto i : controls)
    {
        if (i.opp[0] == opp[0])
            return i.funcs;
    }
    return nullptr;

}