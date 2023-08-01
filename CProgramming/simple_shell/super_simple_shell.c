#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char **split_string(char *str, int *len, char *delim)
{
    char *dup = strdup(str), **str_arr, *store;
	int i, count = 0;

    store = strtok(dup, delim);
	for (i = 0; store; i++)
    {
        store = strtok(NULL, delim);
    }
	str_arr = malloc(sizeof(char *) * i + 1);
    free(dup);
    store = strtok(str, delim);
	while (store)
	{
		str_arr[count++] = store;
		store = strtok(NULL, delim);
	}
	*len = i;
	return (str_arr);
}

int shell()
{
    pid_t pid;
    char *buf = NULL, **av;
    size_t n = 0;
    int p;

    printf("cisfun$: ");
    if (getline(&buf, &n, stdin) == -1)
    {
        perror("Getline");
        printf("Error getline\n");
        exit(1);
    }
    av = split_string(buf, &p, " \n");
    pid = fork();
    if (pid == -1)
    {
        perror("Fork");
        exit(1);
    }
    
    if (pid == 0)
    {
        if (execve(av[0], av, NULL) == -1)
        {
            perror("Execve");
            printf("%s\n", av[0]);
            exit(1);
        }
    }
    else
    {
        wait(NULL);
        free(buf);
        free(av);
    }
}
int main()
{
    while (1)
        shell();
}