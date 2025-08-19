#include <iostream>
#include <string>
using namespace std;

// // string numberToBinary() {
//     int n;
//     cout << "Enter no to find binary: ";
//     cin >> n;
//     if (n == 0) return "0";
//     string binary = "";
//     while (n > 0) {
//         binary = char((n % 2) + '0') + binary; 
//         n /= 2;
//     }
//     return binary;
// }

int pow(int i,int j){
    if(i==0)return 1;
    int ans=1;
    for(int k=1;k<=i;k++){
        ans=ans*2;
    }
    return ans;
}

int binaryToNumber(){
    string s;
    cout<<"Enter binary number: ";
    cin>>s;

    int num=0;
    int k=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='1'){
            num+=pow(k,2);
        }
        k++;
    }
    return num;
}

int main() {
    // cout << numberToBinary() << endl;
    cout << binaryToNumber() << endl;

    return 0;
}
