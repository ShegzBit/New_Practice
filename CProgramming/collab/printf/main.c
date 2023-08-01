#include "main.h"
#include <stdio.h>

/**
 * main - tests _printf
 *
 * Return: 0 on success
*/

int main(void)
{

	int val, val_control;

	val = _printf("This is a %b string\n", 128);
	printf("Printed: %d\n", val);
	printf("----> Contro: \n");
	val_control = printf("This is a %s string\n", "plane");
	printf("Printed: %d\n", val_control);

	return (0);
}
