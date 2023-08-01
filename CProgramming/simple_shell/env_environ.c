#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

extern char **environ;

int main(int ac, char **av, char **env)
{
	printf("env -> %p\n ENV -> %p\n", env, environ);
	return (EXIT_SUCCESS);
}
