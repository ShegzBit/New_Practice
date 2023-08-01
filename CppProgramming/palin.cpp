#include <iostream>
using namespace std;
/**
 * code to check if a number is palindrome in cpp
 */
bool isPalindrome(int x) {
  //complete the function
  int j = 1, copy = x;
  string save, store;
  while (x / 10 > 0)
    {
      save += (x % 10) + '0';
      x /= 10;
    }
  save += x + '0';
  cout << save << endl;
  while (copy / j > 9)
    {
      j *= 10;
    }
  while (copy % j > 0)
    {
      store += (copy / j) + '0';
      copy %= j;
      j /= 10;
    }
  store += copy + '0';
  cout << store << endl;
  if (save == store)
    {
      return (true);
    }
  return (false);
}

int main() {
  int n;
  cout << "Enter number to know if its palindrome: ";
  cin >>n;

  if(isPalindrome(n)) {
    cout <<n<<" is a palindrome";
  }
  else {
    cout << n<<" is NOT a palindrome";
  }
  return 0;
}
