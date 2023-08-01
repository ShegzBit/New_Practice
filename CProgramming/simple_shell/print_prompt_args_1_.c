#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t n = 1024;
    char *str = malloc(n);
    printf("$ ");
    getline(&str, &n, stdin);
    printf("%s", str);
    system(str);
    return 0;
}
