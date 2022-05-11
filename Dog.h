#ifndef ANIMAL_DOG_H
#define ANIMAL_DOG_H


#include "Animal.h"

class Dog: public Animal{
private:
    double weight;

public:
    Dog(string _name, int _age, double _weight);
    void print();
    void print(ostream &os);
};


#endif //ANIMAL_DOG_H
