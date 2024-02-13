#include <iostream>
using namespace std;

void solve(){
    int n;
        cin >> n;

        for (char f = 'a'; f <= 'z'; ++f) {
            for (char s = 'a'; s <= 'z'; ++s) {
                for (char t = 'a'; t <= 'z'; ++t) {
                    
                    int val = (f - 'a' + 1) + (s - 'a' + 1) + (t - 'a' + 1);
                    
                    if (val == n) {
                        cout << f << s << t << endl;
                        
                        f = s = t = 'z' + 1;
                    }
                }
            }
        }
    }


int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
        
    }
    return 0;
}
