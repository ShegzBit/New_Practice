#include <stdio.h>

int main()
{
	//constant pointer
	//constant value
	int val = 8, val1 = 10;
	int const *ptr = &val;
	const int *ptr1 = &val1;

	printf("const value %d, const ptr %d\n", *ptr1, *ptr);

	//changing the address in a const value
	ptr1 = &val;
	//changing the address in a const ptr
	ptr = &val1;
	//const.c: In function ‘main’:
	//const.c:16:14: error: assignment of read-onl		y location ‘*ptr’
	//   16 |         *ptr = &val1;
	//     |
	
	//changing the value of const value
	*ptr1 = val;
	//changing the value of const pointer
	*ptr = val1;

	printf("const value %d, const ptr %d\n", *ptr1, *ptr);
}
