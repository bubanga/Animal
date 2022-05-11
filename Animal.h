#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H
#include <iostream>

using namespace std;

class Animal {
protected:
    int age;
    string name;

public:
    Animal(string _name, int _age);

    virtual void print();

    virtual void print(ostream &os);
};

ostream &operator<<(ostream &os, Animal &animal);

#endif //ANIMAL_ANIMAL_H
