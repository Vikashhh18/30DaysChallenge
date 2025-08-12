#include <iostream>
#include <string>
using namespace std;

string FindBinary(int n) {
    if (n == 0) return "0";
    string binary = "";
    while (n > 0) {
        binary = char((n % 2) + '0') + binary; 
        n /= 2;
    }
    return binary;
}

int main() {
    int n;
    cout << "Enter no to find binary: ";
    cin >> n;

    cout << FindBinary(n) << endl;
    return 0;
}
