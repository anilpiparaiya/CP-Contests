#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i,a,b) for(ll i=a; i<b ;i++)
int next_greater(string s){
    int n = s.length();
    for(i=n-1;i>=0;i--){
        if(s[i]>s[i-1])
            break;
    }
    if(i==0)
        return -1;
    for(i=n-1;i>=0;i--){
        if(s[i])
    }

};
int main(){
    string s;
    getline(cin, s);
    next_greater(s);
    return 0;
}
