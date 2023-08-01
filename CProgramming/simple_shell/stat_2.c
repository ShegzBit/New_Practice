#include "main.h"

int main(int ac, char **av)
{
	struct stat st;
	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: _which filename ... %s\n", av[0]);
		exit(EXIT_FAILURE);
	}

	if(stat(av[1], &st) + 1)
	{
		printf("%s exists\n", av[1]);
		exit(EXIT_SUCCESS);
	}
	printf("%s not found\n", av[1]);
	exit(EXIT_FAILURE);

}
