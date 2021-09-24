#include "Person.h"

Person::Person()
{
	this->name = "Omar";
	this->age = 18;
	this->luck = 100;
}

Person::Person(string name, int age, int luck)
{
	this->name = name;
	this->age = age;
	this->luck = luck;
}

void Person::setName(string name)
{
	this->name = name;
}

void Person::setAge(int age)
{
	this->age = age;
}

void Person::setLuck(int luck)
{
	this->luck = luck;
}

string Person::getName()
{
	return name;
}

int Person::getAge()
{
	return age;
}

int Person::getLuck()
{
	return luck;
}

string Person::getlLucky()
{
	string getlucky = "She is up all night 'til the sun I am up all night to get some She is up all night for good fun I am up all night to get lucky We are up all night 'til the sun";
	cout << getlucky << endl;
	return getlucky;
}

