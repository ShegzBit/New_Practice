#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

extern char **environ;

int main()
{
	int i;
	for (i = 0; environ[i]; i++)
	{
		printf("%s\n", environ[i]);
	}
	return (EXIT_SUCCESS);
}
