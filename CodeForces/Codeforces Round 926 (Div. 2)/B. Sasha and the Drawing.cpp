#include <bits/stdc++.h>
using namespace std;

void temp() {
    long long n, k;
    cin >> n >> k;
    long long cnt = n + n - 2;

    if (k <= cnt * 2){
        cout << (k + 1) / 2 <<"\n";
    } 
    else {
        k -= cnt * 2;
        cout << cnt + k <<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    long long t;
    cin >> t;
    
    while(t--) {
        temp();
    }
    
    return 0;
}
