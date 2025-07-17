// Given an integer array nums representing the amount of money of each house, 
// return the maximum amount of money you can rob tonight without alerting the police.

#include<iostream>
#include<vector>
using namespace std;

int HouseRobbe(vector<int>&arr,int i){
    if(i>=arr.size())return 0;
    int rob=arr[i]+HouseRobbe(arr,i+2);
    int dontRub=HouseRobbe(arr,i+1);
    return max(rob,dontRub);
}

// TC=O(2^n);
// SC=O(N);

int main(){
     int n;
    cout<<"enter number of House :";
    cin>>n;

    vector<int>arr;

    cout<<"Enter cost of every house: ";
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    cout<<HouseRobbe(arr,0);
}