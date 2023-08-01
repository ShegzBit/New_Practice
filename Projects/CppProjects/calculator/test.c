#include <stdio.h>

/**
 * main - convert celsius to fahrenheit
 * Return: Always 0 (Success)
*/
int main()
{
        while (1)
        {
            double celsius;

            printf("Input your value in celsius: ");
            scanf("%lf", &celsius);

            printf("The value of temperature from %f degree celsius to fahrenheitis: %f\n", celsius, (double)((celsius * (9.0 / 5)) + 32));
        }
        return (0);
}