#include "main.h"i

char *_getenv(char *, char **);
void print_path()
{
	extern char **environ;
	char *str = _getenv("PATH", environ);
	char *store = strtok(str, "/\n");
	while (store)
	{
		printf("%s/\n", store);
		store = strtok(NULL, "/\n");
	}
}

int main()
{
	print_path();
	return (EXIT_SUCCESS);
}
