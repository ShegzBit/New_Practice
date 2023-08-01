#include <iostream>

int accessParty(int age)
{
    if(!(isdigit(((char) age))))
    throw age;
    if (age < 18)
    throw age;
    if (age > 35)
    throw age;
    std::cout << "You're welcome into the party" << std::endl;
    return (age);
}

int main()
{
    try 
    {
        int age;
        std::cout << "Enter your age: " ;
        std::cin >> age;
        accessParty(age);
    }
    catch (int x)
    {
        if(!(isdigit((x + '0'))))
        {
            std::cout << "Invalid argument!!! try again" << std::endl;
            std::cin >> x;
            accessParty(x);
        }
        else if (x < 18)
            std::cout << "Anyone of age " << x << " is to young to attend this party. Please try again later" << std::endl;
        else if (x > 35)
            std::cout << "Anyone of age " << x << " is to young to attend this party. Please try again later" << std::endl;
    }
}