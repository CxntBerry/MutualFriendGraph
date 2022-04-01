#include <iostream>
#include <cstdlib>
#include <unordered_set>

class Person {
private:
	int age;
public:
	std::string name;
	std::unordered_set<Person*> FriendList = {};

	void Create(std::string PersonName, int age);
	void CreateFriends(Person FirstPerson, Person SecondPerson);
	void InsertToSet(Person* FriendName)
	{
		FriendList.insert(FriendName);
	}
};

void Person::Create(std::string PersonName, int age)
{

}

void Person::CreateFriends(Person PersonToAdd)
{
	FriendList.insert(PersonToAdd);
}


int main()
{
	
	int howmanyppl;
	std::string Name;
	int Age;
	int howmanyfriends;
	std::cout << "Enter number of people you want to make: ";
	std::cin >> howmanyppl;
	std::cout << "Enter the number of Friends each person has: ";
	std::cin >> howmanyfriends;
	for (int i = 0; i < howmanyppl; i++)
	{
		for (int k = 0; k < howmanyfriends; k++)
		{
			std::unordered_set<Person*> FriendList = {};
			std::cout << "\nPlease enter a name for person " << i << ": ";
			std::cin >> Name;
			std::cout << "Please enter an age for person " << i << ": ";
			std::cin >> Age;
			Person newPerson;
			newPerson.Create(Name, Age);
			std::cout << "\n\nPlease enter a friend of person << " << i << ": ";
			std::cin >> Name;
			std::cout << "\nPlease enter the age of the friend of person " << i << ": ";
			std::cin >> Age;
			Person friendOfNewPerson;
			friendOfNewPerson.Create(Name, Age);
			newPerson.CreateFriends(friendOfNewPerson);
			friendOfNewPerson.CreateFriends(newPerson);
		}
	}
}