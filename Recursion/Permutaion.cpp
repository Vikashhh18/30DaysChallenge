#include<iostream>
#include<vector>
using namespace std;

void findAllPermutaion(vector<int>&arr,int i,vector<vector<int>>&ans){

    if(i==arr.size()){
        ans.push_back(arr);
        return;
    }

    for(int j=i;j<arr.size();j++){
        swap(arr[i],arr[j]);
        findAllPermutaion(arr,i+1,ans);
        swap(arr[i],arr[j]);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr[i]=element;
    }

    vector<vector<int>>ans;
    findAllPermutaion(arr,0,ans);
    cout<<"[";
    for(int i=0;i<ans.size();i++){
        cout<<"'";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        if(i==ans.size()-1)cout<<"'";
        else cout<<"', ";
    }
    cout<<"]";
}