#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i,a,b) for(ll i=a; i<b ;i++)
int main(){
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
//    string :: iterator it;
    if(s1.length()!=s2.length()){
        cout<<"NO";
        return 0;
    }
    f(i,0,s1.length()){
        if(s1[i]!=s2[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
