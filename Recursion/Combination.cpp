#include<iostream>
#include<vector>
using namespace std;

void findAllCombination(int i,int n,int k,vector<vector<int>>&ans,vector<int>&temp){


    if(k==0){
        ans.push_back(temp);
        return;
    }

    for(int j=i;j<=n;j++){
        temp.push_back(j);
        findAllCombination(j+1,n,k-1,ans,temp);
        temp.pop_back();
    }
}

int main(){

    int n;
    cout<<"enter n: ";
    cin>>n;
    int k;
    cout<<"enter k: ";
    cin>>k;

    vector<vector<int>>ans;
    vector<int>temp;
    findAllCombination(1,n,k,ans,temp);
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