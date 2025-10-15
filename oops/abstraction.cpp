// 2. Abstraction

// Abstraction = show only what’s necessary and hide the details.
// In C++, abstraction is achieved using abstract classes or pure virtual functions.

#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void area() = 0;  // pure virtual function
};

class Circle : public Shape {
public:
    void area() override {
        cout << "Area of circle = πr²" << endl;
    }
};

int main() {
    Shape* s = new Circle();
    s->area();
    delete s;
    return 0;
}


