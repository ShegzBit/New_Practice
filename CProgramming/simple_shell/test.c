#include "main.h"

char **split_string(char *str, int *len)
{
	char *delim = " \n", *dup = strdup(str), *store, **str_arr;
	int size = 0;
	store = strtok(dup, delim);
	while(store)
	{
		size++;
		store = strtok(NULL, delim);
	}
	str_arr = malloc(sizeof str * (size + 1));
	//free(dup);
	store = strtok(str, delim);
	while (store)
	{
		store = strtok(NULL, delim);
	}
	*len = size;
	return(str_arr);
}

void print_arr(char **arr)
{
	int i;
	for (i = 0; arr[i]; i++)
	{
		printf("arr[%d] -> %s", i, arr[i]);
	}
}

int main()
{
	int len = 0;
	char *buf = "This is un believable";
	char **ptr = split_string(buf, &len);
	print_arr(ptr);
	/*free 2 handled by user*/
	free(ptr);
}
