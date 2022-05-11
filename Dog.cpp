#include "Dog.h"

Dog::Dog(string _name, int _age, double _weight) : Animal(_name, _age) {
    this->weight = _weight;
}

void Dog::print() {
    Animal::print();
    cout << "Weight: " << this->weight << endl;
}

void Dog::print(ostream &os) {
    Dog::print();
}
