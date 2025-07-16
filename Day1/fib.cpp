#include<iostream>
using namespace std;

// Solve fibaonacci number by recursion and iteravtie

// by recursion 
int fibByRecursion(int n){
    if(n==0 ||n==1)return n;
    return fibByRecursion(n-1)+fibByRecursion(n-2);
}
// Time Complexity: O(2^n)
// Space Complexity: O(n) due to recursion stack

// by interation 
int fibIterative(int n){
    if(n<=1)return n;
    int zero=0;
    int second=1;
    for(int i=second;i<n;i++){
        int next=zero+second;
        zero=second;
        second=next;
    }
    return second;
}
// Time Complexity: O(n)
// Space Complexity: O(1) since we are using only a constant amount of space

int main(){
    int n;
    cout<<"enter number to find fibonacci number: ";
    cin>>n;
    cout<<fibByRecursion(n);
    cout<<fibIterative(n);

   
    return 0;
}