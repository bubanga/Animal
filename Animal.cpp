#include "Animal.h"


Animal::Animal(string _name, int _age) {
    this->name = _name;
    this->age = _age;
}

void Animal::print() {
    cout << "Name: " << this->name << endl;
    cout << "Age: " << this->age << endl;
}

void Animal::print(ostream &os) {
    os << "Name: " << this->name << endl;
    os << "Age: " << this->age << endl;
}

ostream &operator<<(ostream &os, Animal &animal) {
    animal.print();
    return os;
}