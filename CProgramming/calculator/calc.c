#include "main.h"

int main()
{
    char *str = malloc(15);
    printf("enter a number: ");
    scanf("%s", str);
    double p = strint(str);
    printf("p = %f\n", p);
}