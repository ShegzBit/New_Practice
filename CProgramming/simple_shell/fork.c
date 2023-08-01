#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main()
{

    printf("Before fork\n");
    pid_t child_p = fork();

    if (child_p == 0)
        printf("Child\n");
    else
    {
        wait(NULL);
        printf("Father\n");
    }
}