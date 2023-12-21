#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i,a,b) for(ll i=a; i<b ;i++)
void sieve_prime(int n){
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for(int p=2; p*p<=n;p++){
        if(prime[p]==true){
            for(int i=p*p; i<=n;i+=p){
                prime[i]=false;
            }
        }
    }
    f(i,2,n+1)
        if(prime[i]==true)
            cout<<i<<" ";
}
int main(){
    int n;
    scanf("%d",&n);
    sieve_prime(n);
    return 0;
}
