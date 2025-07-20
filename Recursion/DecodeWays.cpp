#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int DecodeWays(string&s,int n){
    if(n<=0)return 1;
    int res=0;
    if(s[n]!='0'){
        res=DecodeWays(s,n-1);
    }
    if(n-1>=0&&(s[n-1]=='1'||(s[n-1]=='2'&&s[n]>='0'&&s[n]<='6'))){
        res+=DecodeWays(s,n-2);
    }
    return res;
}
// TC=>O(2^N);
// SC=>O(N);
void PrintDecodeWays(vector<string>& ans, int n, string& s, char arr[], string curr) {
    if (n < 0) {
        reverse(curr.begin(), curr.end());
        ans.push_back(curr);
        return;
    }

    // One digit
    if (s[n] != '0') {
        int index = s[n] - '0';
        PrintDecodeWays(ans, n - 1, s, arr, arr[index] + curr);
    }

    // Two digits
    if (n - 1 >= 0) {
        int num = (s[n - 1] - '0') * 10 + (s[n] - '0');
        if (num >= 10 && num <= 26) {
            PrintDecodeWays(ans, n - 2, s, arr, arr[num] + curr);
        }
    }
}

int main() {
    string s;
    cout << "Enter number: ";
    cin >> s;

    if (s.empty() || s[0] == '0') {
        cout << 0 << endl;
        return 0;
    }

    char arr[27];
    for (int i = 1; i <= 26; i++) {
        arr[i] = 'A' + (i - 1);
    }

    vector<string> ans;
    PrintDecodeWays(ans, s.size() - 1, s, arr, "");

    for (int i = 0; i < ans.size(); i++) {
        cout << "String " << i << " : " << ans[i] << endl;
    }
}

// PrintDecodeWays output=>
// Enter number: 226
// String 0 : FBB
// String 1 : FV
// String 2 : ZB