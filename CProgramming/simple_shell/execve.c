#include "main.h"

int main()
{
    char *argv[] = {"/bin/ls", "-l", "tmp", NULL};
    if (execve(argv[0], argv, NULL) == -1)
    {
        perror("Execve");
    }
}