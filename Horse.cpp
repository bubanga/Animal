#include "Horse.h"

Horse::Horse(string _name, int _age, string _breed, int _height) : Animal(_name, _age) {
    this->breed = _breed;
    this->height = _height;
}

void Horse::print() {
    Animal::print();
    cout << "Breed: " << this->breed << endl;
    cout << "Height: " << this->height << endl;
}

void Horse::print(ostream &os) {
    Horse::print();
}


