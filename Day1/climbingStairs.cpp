#include<iostream>
using namespace std;

// Solve climbingStairs by uisng recursion or iterative 


int climbStairsByRecursion(int n){
    if(n==0)return 1;
    if(n<0)return 0;

    return climbStairsByRecursion(n-1)+climbStairsByRecursion(n-2);
}
// Time complexity=O(2^n);
// Space complexity= O(n) due to call stack


int climbStairsByIteration(int n){
    int first=1;
    int second=1;
    for(int i=2;i<=n;i++){
        int next=first+second;
        first=second;
        second=next;
    }
    return second;
}
// Time complexity=O(N);
// Space complexity= O(1)

int main() {
    int n;
    cout<<"Enter number of stairs: ";
    cin>>n;
    // cout<<climbStairsByRecursion(n);
    cout<<climbStairsByIteration(n);
    
    return 0;
}