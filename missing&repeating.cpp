#include <iostream>
#include <vector>
using namespace std;

vector<int> solve(const vector<int> &A) {
    long long n = A.size();

    long long tSum  = n * (n + 1) / 2;
    long long tSumS = n * (n + 1) * (2*n + 1) / 6;

    long long aSum = 0, aSumS = 0;
    for(int i = 0; i < n; i++){
        aSum  += A[i];
        aSumS += (long long)A[i] * A[i];
    }

    long long a = tSum - aSum;     // missing - repeating
    long long b = tSumS - aSumS;   // missing² - repeating²

    long long c = b / a;           // missing + repeating

    long long missing   = (a + c) / 2;
    long long repeating = missing - a;

    return {(int)repeating, (int)missing};
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<int> ans = solve(arr);

    cout << ans[0] << " " << ans[1] << endl;
}
