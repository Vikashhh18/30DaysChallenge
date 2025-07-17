// You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.
// You can either start from the step with index 0, or the step with index 1.
// Return the minimum cost to reach the top of the floor.

#include<iostream>
#include<vector>
using namespace std;

int minCostToClimb(vector<int>&arr,int i){
    if(i>=arr.size())return 0;

    return arr[i]+min(minCostToClimb(arr,i+1),minCostToClimb(arr,i+2));
}

// Time Complexity=O(2^N)
// Space complexity= O(N) due to call stack;

int main(){
    int n;
    cout<<"enter number of stairs :";
    cin>>n;

    vector<int>arr;

    cout<<"Enter cost of every stairs: ";
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    // cout<<"hello";
    cout<<min(minCostToClimb(arr,0),minCostToClimb(arr,1));

}