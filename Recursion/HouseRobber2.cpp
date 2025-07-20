#include<iostream>
#include<vector>
using namespace std;


int solve(int i,int n,vector<int>&nums){
        if(i>n)return 0;
        // take
        int include=nums[i]+solve(i+2,n,nums);
        // not take 
        int exclude=solve(i+1,n,nums);
        return max(include,exclude);
    }

int rob(vector<int>& nums) {
        int n=nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        return max(solve(0,n-2,nums),solve(1,n-1,nums));
}

int main(){
    int n;
    cout<<"size of houses at street: ";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        int element;
        cout<<"money in house: ";
        cin>>element;
        nums[i]=element;
    }

    int maxMoneyRob=rob(nums);
    cout<<"maximum money rob : "<<maxMoneyRob;
}