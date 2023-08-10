#ifndef _STRUCTURE_
#define _STRUCTURE_

#include <vector>
#include <algorithm>
#include <iostream>
#include <unistd.h>

using std::vector;

class Person
{
private:
        std::string name;
        int age;
        char sex;
public:
        Person()
        {
                std::cout << "What gender are you F  or M" << std::endl;
                std::cin >> sex;

                (sex == 'F') ? name = "Jane Doe" : name = "John Doe";
                age = 0;
        }

        Person(std::string n, int a, char g) : name(n), age(a), sex(g)
        {}
	
	std::string getName()
	{
		return (this->name);
	}

	int getAge()
	{
		return (this->age);
	}
};

bool operator<(Person p1, Person p2)
{
	if (p1.getAge() < p2.getAge()) 
		return (1);
	return (0);
}

#endif
