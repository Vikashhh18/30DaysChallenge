// Given an integer array nums of unique elements, return all possible subsets (the power set).
// The solution set must not contain duplicate subsets. Return the solution in any order.

#include<iostream>
#include<vector>
using namespace std;

void Subsets(vector<int>arr,int i,vector<int>&temp,vector<vector<int>>&ans){
    if(i>=arr.size()){
       ans.push_back(temp);
        return;
    }

    Subsets(arr,i+1,temp,ans);
    temp.push_back(arr[i]);
    Subsets(arr,i+1,temp,ans);
}

int main(){
     int n;
    cout<<"enter number of element :";
    cin>>n;

    vector<int>arr;

    cout<<"Enter Value inside arr: ";
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    vector<int>temp;
    vector<vector<int>>ans;
    Subsets(arr,0,temp,ans);
}