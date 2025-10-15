// 1. Encapsulation

// Encapsulation = data hiding
// We keep variables private and access them using public methods (getters/setters).

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        if(a > 0) age = a;
    }

    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
};

int main() {
    Student s;
    s.setName("Vikash");
    s.setAge(20);
    cout << "Name: " << s.getName() << ", Age: " << s.getAge();
    return 0;
}
