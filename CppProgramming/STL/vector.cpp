#include "structure.hpp"


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

	//Pop each elements from behind
	for (auto it = av.begin(); it != av.end();)
	{
		for (int a = 0; a < av.size(); a++)
		{
			std::cout << "\tAv -+-> " << av[a] << std::endl;
		}
		std::cout << "Popped an element" << std::endl;
		av.pop_back();
	}

	 av = {13, 2, 74, 51, 2, 81, 13, 5, 94, 2, 0, 8, 77, 6, 56, 89};

	//After re-occupying vector
	//Remove all element lesser than 46
	std::cout << "Remove all elements less than 46\n";
        for (auto a = av.begin(); a != av.end();)
        {
		if (*a <= 46)
			av.erase(a);
		else
		{
			std::cout << "\tAv -+-> " << *a << std::endl;
			a++;
		}
        }

	for (auto a : av)
	{
		std::cout << "Av -+-> " << a << " survived the test of time";
		usleep(2000000);
		std::cout << "\r" << std::flush;
	}

	std::cout << "\n";
	

	//Trying user defined datatype on vectors
	vector<Person> people;
	people.push_back(Person());
	people.push_back(Person("Feranmi", 17, 'M'));
	people.push_back(Person("Pelumi", 20, 'F'));
	people.push_back(Person("Darasimi", 13, 'M'));
	people.push_back(Person("Ibukun", 11, 'M'));

	std::sort(people.begin(), people.end());
	for (auto person : people)
	{
		std::cout << person.getName() << " is " << person.getAge() << " years old" <<std::endl;
	}
}
