// https://cses.fi/paste/3b399b2f6eda22d1714b3d/
#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ll n;
    cin>>n;
    cout<<n;
    while(n > 1){
        if(n % 2 == 0){
            n = n/2;
        }
        
        else{
            n = 3 * n + 1;
        }
        
       cout<<" "<<n;
    }
    
 
    return 0;
}
