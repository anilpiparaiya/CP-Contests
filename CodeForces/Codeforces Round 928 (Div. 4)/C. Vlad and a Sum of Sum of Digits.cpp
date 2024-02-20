#include<bits/stdc++.h>
using namespace std;

#define int long long

const int N = 2e5 + 1;

int digitSum(int x) {
    int res = 0;
    while(x) {
        res += x % 10;
        x /= 10;
    }
    return res;
}

int main() {

    vector<int>f(N);

    for(int i = 1; i < N; i++) {
        f[i] = f[i - 1] + digitSum(i);
    }

    int t; cin >> t;

    while(tt--) {
        int n; 
        cin >> n;
        cout << f[n] << "\n";
    }
}
