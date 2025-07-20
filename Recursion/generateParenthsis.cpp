#include<iostream>
#include<vector>
using namespace std;

void  generateParenthsi(int n,int open,int close,vector<string>&ans,string curr){
    // base condition 
    if(close==n){
        ans.push_back(curr);
        return;
    }
    // add ( 
    if(open<n){
        generateParenthsi(n,open+1,close,ans,curr+"(");
    }
    // add ) 
    if(close<open){
        generateParenthsi(n,open,close+1,ans,curr+")");
    }
}

// TIME COMPLEXITY=>0(2^2N);
// Space Complexity=>O(2N);
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    vector<string>ans;
    generateParenthsi(n,0,0,ans,"");

    for(int i=0;i<ans.size();i++){
        cout << "string " << i << ": [";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"] ,";
        cout<<endl;
    }
}


// output :-
// enter number : 3
// string 0: [( ( ( ) ) ) ] ,
// string 1: [( ( ) ( ) ) ] ,
// string 2: [( ( ) ) ( ) ] ,
// string 3: [( ) ( ( ) ) ] ,
// string 4: [( ) ( ) ( ) ] ,
