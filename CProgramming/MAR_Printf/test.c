#include "main.h"
#include <stdio.h>

int main()
{
	int len = printf("print this statemant\n");
	int len2 = _printf("print this statemant\n");
	printf ("_prinf -> [%d] >|< printf -> [%d]\n", len2, len);

	return (0);
}
