#include "main.h"

double (*opp(char op))(double, double)
{
    int i;
    ops arr[]=
    {
        {'+', &add},
        {'-', &sub},
        {'/', &divd},
        {'x', &mul}
    };

    for (i = 1; i < 5; i++)
    {
        if (op == arr[i].op) return(arr[i].opt);
    }

    printf("Invalid operator: %c", op);
    return(NULL);

}

int strin(char obj, char *set)
{

    int i;
    for (i = 0; i < strlen(set); i++)
    {
        if (obj == set[i]) return(i);
    }
    return(-1);
}

int intin(int obj, int size, int *arr)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (obj == arr[i]) return(i);
    }
    return(-1);
}

int isnumeral(char obj)
{
    char var[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '-', '.'};
    if (strin(obj, var) != -1)
    {
        return(true);
    }
    return(false);
}

double strint(char *str)
{
    char var[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.'};
    int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,};
    /*str = "2456"*/
    double ten = 10;
    lint size = strlen(str)/* size = 4*/, placeV;
    int position = 0, i = 0, j;
    lint ret = 0;
    for (; i < size; i++, position++)
    {
        if(!(isnumeral(str[i])))
        {
            return(-1);
        }
        placeV = pow(ten, size - position);
        for (j = 0; j < 11; j++)
        {
            if (str[position] == var[j] && j != 10)
            {
                ret += num[j] * placeV;
            }
            else if(str[position] == var[j] && j == 10)
            {
                ten = 0.1;
                position = 1;
            }
        }
    }
    ret /= 100;
    return(ret);
}
