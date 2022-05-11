#include <iostream>
#include "Dog.h"
#include "Horse.h"

int main() {
    Dog dog = Dog("Mila", 5, 4.75);
    Horse horse = Horse("Rafal", 37, "Pospolity", 180);
    cout << dog;
    cout << endl;
    cout << horse;
    return 0;
}
