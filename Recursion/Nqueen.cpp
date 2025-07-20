#include<iostream>
#include<vector>
using namespace std;

bool isvalid(int col,int row,vector<string>&chess,int n){
    // leftSide
    for(int i=col;i>=0;i--){
        if(chess[row][i]=='Q')return false;
    }
    //left top dignal
    for(int i=row,j=col;i>=0&&j>=0 ;i--,j--){
        if(chess[i][j]=='Q')return false;
    }
    // left bottom diagonal
    for(int i=row,j=col;i<n&&j>=0 ;i++,j--){
        if(chess[i][j]=='Q')return false;
    }
    return true;
}

void helper(int col,int n,vector<vector<string>>&ans,vector<string>&chess){

    if(col==n){
        ans.push_back(chess);
        return ;
    }


    for(int row=0;row<n;row++){
        if(isvalid(col,row,chess,n)){
            chess[row][col]='Q';
            helper(col+1,row,ans,chess);
            chess[row][col]='.';
        }
    }
}

vector<vector<string>> Nqueen(int n){
    vector<vector<string>>ans;
    vector<string>chess(n);
    string s(n,'.');
    for(int i=0;i<n;i++){
        chess[i]=s;
    }
    helper(0,n,ans,chess);
    return ans;
}

int main(){
    int n;
    cout<<"Enter number  of queen: ";
    cin>>n;
    vector<vector<string>>ans=Nqueen(n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            for(int k=0;k<ans[i][j].size();j++){
                cout<<ans[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<"-----------------------"<<endl;
    }
}