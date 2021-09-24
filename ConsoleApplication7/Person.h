#ifndef CONSOLEAPPLICATION7_PERSON_H
#define CONSOLEAPPLICATION7_PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person();
	Person(string name, int age, int luck);
	void setName(string name);
	void setAge(int age);
	void setLuck(int luck);
	string getName();
	int getAge();
	int getLuck();
	string getlLucky();

private:
	string name;
	int age;
	int luck;

};

#endif