#include <iostream>
#include <array>
#include <algorithm>

using std::array;

int main()
{
	int i;
	array<int, 10> arr = {1, 23, 47, 90, 489};
	auto it = arr.begin();

	//Printing all element in arr
	for (it = arr.begin(); it != arr.end(); it++)
	{
		std::cout << "\tArr[" << i << "] -+->" << *it << std::endl;
	}

	//Printing arr size
	std::cout << "Arr is of size " << arr.size() << std::endl;

	//Fill arr with 10 and print again
	arr.fill(10);

	std::cout << "After filling with 10" << std::endl;
	for (it = arr.begin(); it != arr.end(); it++)
	{
		std::cout << "\tArr[" << i << "] has now become " << *it << std::endl;
	}

	//Enter new value into array print and sort and print
	arr = {3, 17, 11, 20, 13, 12, 12, 3, 7};
	std::cout << "Arr before sorting\n";
	for (it = arr.begin(); it != arr.end(); it++)
	{
		std::cout << "\tArr[" << i << "] -+-> " << *it << std::endl;
	}
	std::sort(arr.rbegin(), arr.rend());

	std::cout << "Arr after sorting\n";
	for (it = arr.begin(); it != arr.end(); it++)
	{
		std::cout << "\tArr[" << i << "] -+-> " << *it << std::endl;
	}

	//finding an element
	std::cout << "All elements in the array lesser than 13\n";

	for (it = arr.begin(); it != arr.end(); it++)
	{
		(*it < 13) ? std::cout << *it << "\n" : std::cout <<"";
		for (i = 13; i >= 0; i--)
		{
			std::find(it, arr.end(), i);
		}
	}
}
