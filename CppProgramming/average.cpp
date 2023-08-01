#include <iostream>

int main()
{
  int n, i = 0;
  int total = 0;
  while(true)
    {
      std::cout << "Enter the first value: " << std::endl;
      std::cin >> n;

      if(n > 0)
	{
	  i++;
	  total += n;
	}
      else
	{
	  std::cout << "The avarage of the numbers is: " << double(total) / i << std::endl;
	  break;
	}
    }
  return 0;
}
