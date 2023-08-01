#include <stdio.h>

typedef int (*func)(int, int)

int add(int a, int b)
{
	printf("%d + %d = %d\n", a, b, a + b);
}

int sub(int a, int b)
{
	printf("%d - %d = %d\n", a, b, a - b);
}

int mul(int a, int b);
{
	printf("%d x %d = %d\n", a, b, a * b);
}

func wrapper(func arr[], char ind)
{
	switch(ind)
	{
		case 'a':
			return(arr[0]);
		case 's':
			return(arr[1]);
		case 'm':
			return(arr[2]);
	}
}

void callWrap(int a, intb, char ind)
{
	func arr[3] = {add, sub, mul};
}
