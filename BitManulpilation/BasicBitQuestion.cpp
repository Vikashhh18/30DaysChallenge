#include<iostream>
using namespace std;

void swapToNumber(int &a,int &b){
    // 1.take extra varaible
    // int temp=a;
    // a=b;
    // b=temp;

    // 2.Using xor operation
    a=a^b;
    b=a^b;
    a=a^b;
}

int main(){

    // swap 2 number 
    int a=5;
    int b=6;
   swapToNumber(a,b);
   cout << a << " " << b;
}