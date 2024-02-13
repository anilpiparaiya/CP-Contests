#include <bits/stdc++.h>
using namespace std;

void temp(){
    int n; cin >> n;
        int sum = 0;
        vector<int> v(n);
        for(auto &a : v) {
            cin >> a;
        }
        for(int i =0; i<v.size(); ++i) {
            sum += v[i];
        }
        int avg = sum/n;
        sum =0;
        int multiply= 0, flag = 1;
        for(int j = 0; j<n; ++j) {
            sum += v[j];
            multiply = avg*(j+1);
            if(sum<multiply) flag =0;
        }
        
        if(!flag) cout << "NO" << endl;
        else cout << "Yes" << endl;
    
}

int main() {
    int t; cin >> t;
    
    while(t--) {
        temp();
    }
    
    return 0;
}
