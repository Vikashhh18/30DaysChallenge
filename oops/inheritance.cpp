// 3. Inheritance

// Inheritance = acquire properties of another class.

#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    void introduce() {
        cout << "Hi, I'm " << name << endl;
    }
};

// Derived class
class Student : public Person {
public:
    int rollNo;
    void study() {
        cout << name << " is studying." << endl;
    }
};

int main() {
    Student s;
    s.name = "Vikash";
    s.rollNo = 10;
    s.introduce();  // From base class
    s.study();      // From derived class
    return 0;
}
