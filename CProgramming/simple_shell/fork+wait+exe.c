#include "main.h"

int main(int ac, char **av)
{
    pid_t pid;
    int i;

    for (i = 0; i < 5; i++)
    {
        pid = fork();
        if (pid == 0)
        {
            execve(av[1], av, NULL);
        }
        else
        {
            wait(NULL);
        }
    }
}