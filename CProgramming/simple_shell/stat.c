#include "main.h"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        printf("incorrect number of arguments\n");
    }
    struct stat st;
    int n = stat(av[1], &st);
    if (n + 1)
        printf("%s exists\n", av[1]);
    else
        printf("%s doesn't exist\n", av[1]);
}