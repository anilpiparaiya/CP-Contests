#include <bits/stdc++.h>
using namespace std;

void temp() {

    long long n;
    cin >> n;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++) cin >> a[i];

    long long mx = a[0], mn = a[0];
    for (long long i = 1; i < n; i++) {
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }

    cout << mx - mn << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long t;
    cin >> t;
    
    while(t--) {
        temp();
    }
    
    return 0;
}

// Solution 2
#include <bits/stdc++.h>
using namespace std;

void temp(){
    long long n;
        cin >> n;
        vector<long> v(n);
        
        for(auto &a: v) {
            cin >> a;
        }
        
        sort(v.begin(), v.end());
        
        cout << v[n-1] - v[0] << endl;
}
int main() {
    int t; 
    cin >> t;
    while(t--) {
        temp();
    }
    
    return 0;
}
