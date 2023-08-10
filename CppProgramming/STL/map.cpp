#include <iostream>
#include <map>
#include <algorithm>

using std::endl, std::map;

int main()
{
	//Declaring and initing a map
	map<int, std::string> coders{
		{1, "test"},
		{2, "test2"},
		{3, "Feranmi"},
		{4, "Fawaz"},
		{5, "Mariam"},
		{6, "Fortune"},
		{7, "Essa"},
		{8, "Paul"},
		{9, "Drey"},
		{10, "Gabriel"},
		{11, "Amy"}
	};

	std::cout << "After initializing map" << std::endl;
	for (auto c : coders)
	{
		std::cout << "\t" << c.second << " is the number " << c.first << " coder" << std::endl;
	}

	//Insert a pair into the map 
	coders.insert({12, "Shegz"});

	std::cout << "After using insert to insert a pair" << std::endl;
	for (auto c : coders)
        {
                std::cout << "\t" << c.second << " is the number " << c.first << " coder" << std::endl;
        }

	//Using a map iterator
	map<int, std::string>::iterator it = coders.begin();
	std::cout << "Moving through, through an iterator" << std::endl;
	for (it; it != coders.end(); it++)
	{
		std::cout << "\t" << it->second << " -+-> printed with an iterator" << std::endl;
	}

	//Finding keys
	std::cout << "\nFinding only the key 5" << std::endl;
	auto findKey = coders.find(5);
	if (findKey != coders.end())
	{
		std::cout << "\tFound " << findKey->second << " with key 5" << std::endl;
	}

	//inserting a pair
	std::pair<int, std::string> newPair = {13, "John"};

	coders.insert(newPair);
	std::cout << "\nPrinting map data after inserting a predeclared pair" << std::endl;
	for (it = coders.begin(); it != coders.end(); it++)
        {
                std::cout << "\t" << it->second << " -+-> printed with an iterator" << std::endl;
        }

	//Erase key 7
	coders.erase(7);

	std::cout << "\nPrinting map data after Erasing key 7" << std::endl;
	for (it = coders.begin(); it != coders.end(); it++)
        {
                std::cout << "\t" << it->second << " -+-> printed with an iterator" << std::endl;
        }
}
