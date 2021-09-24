#include <iostream>
#include <string>
#include <vector>
#include "Person.h"
using namespace std;

void changeLuck(Person &p1, Person &p2) {
    int luck = p1.getLuck();
    p1.setLuck(p2.getLuck());
    p2.setLuck(luck);
}

int main()
{
    
    Person* p1 = new Person("Maga", 14, rand() % 100);
    Person* p2 = new Person("Kainar", 15, rand() % 100);
    Person* p3 = new Person("John", 14, rand() % 100);
    Person* p4 = new Person("Yerasyl", 26, rand() % 100);
    Person* p5 = new Person("Inokentiy", 4, rand() % 100);
    vector<Person> Persons { *p1, *p2, *p3, *p4, *p5 };

    cout << "p1 Luck: " << Persons[0].getLuck() << ". p2 Luck: " << Persons[1].getLuck() << endl;
    changeLuck(Persons[0], Persons[1]);
    cout << "p1 Luck: " << Persons[0].getLuck() << ". p2 Luck: " << Persons[1].getLuck();

    delete p1, p2, p3, p4, p5;

}

