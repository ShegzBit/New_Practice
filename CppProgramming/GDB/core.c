#include <stdio.h>

int calc_div(double a, double b)
{
	return (a / b);
}

int main()
{
	double a = 19, b = 0;
	printf ("%d\n", calc_div(a, b));
	return (0);
}
