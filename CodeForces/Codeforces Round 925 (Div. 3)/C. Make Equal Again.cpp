#include <bits/stdc++.h>
using namespace std;

void temp() {
    long long n;
    cin >> n;
    vector<long long> v(n);

    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }
    long long l = 0, r = n - 1;
    while (l < n && v[l] == v[0]) l++;
    while (r >= 0 && v[r] == v[n - 1]) r--;

    if (n == 1) {
        cout << 0 << endl;
        return;
    }

    if (v[0] != v[n - 1]) {
        cout << min(n - l, r + 1) << endl;
    } else {
        cout << max(0LL, r - l + 1) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--) {
        temp();
    }
    return 0;
}
