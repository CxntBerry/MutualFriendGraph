#include <iostream>
#include <cstdlib>
#include <vector>

class Person {
private:
	int age;
public:
	std::string name;
	std::vector<std::string> Friends;

	void Create(std::string PersonName, int age);
};

void Person::Create(std::string PersonName, int Age)
{

}

int main()
{
	int howmanyppl;
	std::string Name;
	int Age;
	std::cout << "Enter number of people you want to make: ";
	std::cin >> howmanyppl;
	for (int i = 0; i < howmanyppl; i++)
	{
		std::cout << "\nPlease enter a name for person " << i << ": ";
		std::cin >> Name;
		std::cout << "Please enter an age for person " << i << ": ";
		std::cin >> Age;
		Person newPerson;
		newPerson.Create(Name, Age);
	}
}