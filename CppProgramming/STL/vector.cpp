#include <vector>
#include <algorithm>
#include <iostream>

using std::vector;

int main()
{
	int i = 0;
	//Declaring and initialzing a vector
	vector<int> av{13, 2, 74, 51, 2, 81, 13, 5, 94, 2, 0, 8, 77, 6, 56, 89};
	vector<int>::iterator it = av.begin();

	for (int a = 0; a < av.size(); a++)
	{
		std::cout << "\tVec[" << i++ << "] -+-> " << av[a] << std::endl;
	}

	//Finding Elements
	std::cout << "ALl elements less than 46\n";
	for (auto a = av.begin(); a != av.end(); a++)
	{
		(*a <= 56) ? std::cout << "\tAv -+-> " << *a <<"\n" : std::cout <<"";
		for(int i = 56; i >= 0; i--)
		{
			find(a, av.end(), i);
		}
	}

	//Sort the vector ascendingly
	std::sort(av.begin(), av.end());

	std::cout << "After sorting vector" << std::endl;
	for (auto a : av)
	{
		std::cout << "\tAv -+-> " << a << std::endl;
	}
	
	//Sort the vector descendingly
	std::reverse(av.begin(), av.end());

	std::cout << "After sorting Vector backwards" << std::endl;
	for (auto a : av)
	{
		std::cout << "\tAv -+-> " << a << std::endl;
	}

	//Inserting in vector
	av.insert(it, 500);

	std::cout <<"After inserting 500 at the start of vector" << std::endl;
	for (auto it = av.begin(); it != av.end(); it++)
	{
		std::cout << "\tAv -+-> " << *it << std::endl;
	}

	//Pop each elements
	for (auto it = av.begin(); it != av.end(); it++)
	{
		for (int a = 0; a < av.size(); a++)
		{
			std::cout << "\tAv -+-> " << av[a] << std::endl;
		}
		//av.pop_back();
	}

	std::cout << "Remove all elements less than 46\n";
        for (auto a = av.begin(); a != av.end(); a++)
        {
		if (*a <= 46)
			av.erase(a);
		std::cout << "\tAv -+-> " << *a << std::endl;
        }
}
