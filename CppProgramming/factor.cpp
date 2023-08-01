#include <iostream>
#include <list>
/**
 * Checks if a number is prime by
 * is_prime : addition of factors to sum up to 1 + prime number
 * eff_primeCheck: trial division
 * factor: checks the factors of a number by dividing it by 1 to that number and adding each to a linked list
 */
typedef long long int lint;

std::list<lint> factor(lint mult)
{
  std::list<lint> factors;
  for (lint i = 1, j = 0; i <= mult; i++, j++)
    {
      if (mult % i == 0)
	{
	  factors.push_back(i);
	}
    }
  return(factors);
}

bool is_prime(lint prime)
{
  std::list<lint> factors = factor(prime);
  int helper = 0;
  for (auto i : factors)
    {
      helper += i;
    }
  if (helper == (prime + 1))
    {
      std::cout << prime << " is a prime number" << std::endl;
      return(true);
    }
  std::cout << prime << " is not a prime number" << std::endl;
  return (false);
}
lint eff_primeCheck(lint prime)
{
  for (lint i = 2; i <= prime; i++)
    {
      if (prime % i == 0 && prime != i || prime == 0)
	{
	  std::cout << prime << " is not prime " << std::endl;
	  return(0);
	}
    }
  std::cout << prime << " is prime " << std::endl;
  return(1);

}
void printList(std::list<lint> factor)
{
  auto iter = factor.begin();
  int i;
  for (iter, i = 0; iter != factor.end(); iter++, i++)
    {
      std::cout << "factor[" << i << "] = " << *iter << std::endl;
    }
}

int main()
{
  std::list<lint> factors;
  while(1)
    {
      lint prime;
      std::cout << "enter a number to know if it's prime: ";
      std::cin >> prime;
      if(prime < 0 || !(prime % 1 == 0)) break;
      putchar('\n');
      eff_primeCheck(prime);
      printList(factor(prime));
    }
  std::cout << "Applicaton closed" << std::endl;
}
