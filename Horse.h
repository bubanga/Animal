#ifndef ANIMAL_HORSE_H
#define ANIMAL_HORSE_H


#include "Animal.h"

class Horse: public Animal {
private:
    string breed;
    int height;

public:
    Horse(string name, int age, string _breed, int _height);
    void print();
    void print(ostream &os);
};


#endif //ANIMAL_HORSE_H
