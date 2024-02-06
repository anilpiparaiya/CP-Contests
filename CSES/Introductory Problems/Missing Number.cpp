//https://cses.fi/paste/b1de00d66e69f87f714b56/

#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ll n, s=0;
    cin>>n;
    
    for(int i=1; i<n; i++){
        int a;
        cin>>a;
        s += a;
    }
    cout<<n*(n+1)/2-s;
    
    return 0;
}