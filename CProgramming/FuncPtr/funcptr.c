#include <stdio.h>
#include <stdlib.h>

typedef int (**funcArr)(int, int);
typedef int (*func)(int, int);

int add(int a, int b)
{
	printf("%d + %d = %d\n", a, b, a + b);
}

int sub(int a, int b)
{
	printf("%d - %d = %d\n", a, b, a - b);
}

int mul(int a, int b)
{
	printf("%d * %d = %d\n", a, b, a * b);
}

func funcp(funcArr num, int size, int indx)
{
	return (num[indx]);
}

int opp(int a, int b, int ind)
{
	 func arr[3];
	 arr[0] = &add;
	 arr[1] = &sub;
	 arr[2] = &mul;
	 func funcs =  funcp(arr, 3, ind);
	 funcs(a, b);
}

int main()
{
	opp(5, 4, 0);
}
