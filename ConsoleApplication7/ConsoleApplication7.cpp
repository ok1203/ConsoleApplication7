#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Person.h"
using namespace std;

void changeLuck(Person &p1, Person &p2) {
    int luck = p1.getLuck();
    p1.setLuck(p2.getLuck());
    p2.setLuck(luck);
}

int main()
{
    srand(time(0));
    Person* p1 = new Person("Maga", 14, rand() % 100);
    Person* p2 = new Person("Kainar", 15, rand() % 100);
    Person* p3 = new Person("John", 14, rand() % 100);
    Person* p4 = new Person("Yerasyl", 26, rand() % 100);
    Person* p5 = new Person("Inokentiy", 4, rand() % 100);
    vector<Person> Persons { *p1, *p2, *p3, *p4, *p5 };

    for (int i = 0; i < 5; i++) {
        cout << Persons[i].getName() << " " << Persons[i].getAge()<< " " << Persons[i].getLuck()<< endl;
    }

    cout << "Luckiest man: ";
    int max = Persons[0].getLuck();
    int index;
    for (int i = 0; i < 5; i++) {
        if (max < Persons[i].getLuck()) {
            max = Persons[i].getLuck();
            index = i;
        }
    }
    cout << Persons[index].getName()<< ", with luck "<< Persons[index].getLuck() << endl;

    cout << "p1 Luck: " << Persons[0].getLuck() << ". p2 Luck: " << Persons[1].getLuck() << endl;
    changeLuck(Persons[0], Persons[1]);
    cout << "p1 Luck: " << Persons[0].getLuck() << ". p2 Luck: " << Persons[1].getLuck();

    delete p1, p2, p3, p4, p5;

}

