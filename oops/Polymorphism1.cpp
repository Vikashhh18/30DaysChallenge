// (b) Runtime Polymorphism – Function Overriding

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Some generic sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark!" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;
    a->sound();   // Output: Bark!
    return 0;
}
