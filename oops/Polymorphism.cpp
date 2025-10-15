// Polymorphism = “many forms” — same function behaves differently.

// Two types:

// Compile-time polymorphism → Function overloading

// Runtime polymorphism → Function overriding



// (a) Compile-Time Polymorphism – Function Overloading
#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math m;
    cout << m.add(5, 3) << endl;       // calls int version
    cout << m.add(2.5, 3.5) << endl;   // calls double version
    return 0;
}


// (b) Runtime Polymorphism – Function Overridin