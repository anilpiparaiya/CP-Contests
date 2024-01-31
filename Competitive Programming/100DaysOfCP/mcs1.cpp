
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,b) for(ll i=a;i<b;i++)

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    f(i,0,n)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    int sum=0;
    f(i,0,k){
        sum+=a[i];
    }
    cout<<sum;
    return 0;
}
