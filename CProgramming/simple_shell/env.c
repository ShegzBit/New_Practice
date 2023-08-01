#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av, char **env)
{
	while(*env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}
	return(EXIT_SUCCESS);
}
