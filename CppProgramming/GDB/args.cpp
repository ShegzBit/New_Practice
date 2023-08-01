#include <iostream>

int main(int ac, char *av[])
{
	int i = 0;

	while (av)
	{
		std::cout << *av << std::endl;
		av++;
	}
	return (0);
}
