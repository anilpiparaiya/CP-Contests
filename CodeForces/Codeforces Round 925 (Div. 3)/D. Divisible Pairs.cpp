#include<bits/stdc++.h>
using namespace std;

void temp(){
    long long n;
    cin>>n;
    long long x;
    cin>>x;
    
    long long y;
    cin>>y;
    
    vector<long long>v(n);
    
    map<long long, map<long long, long long>>mp;
    for(long long i=0; i<n;i++){
        cin>>v[i];
        mp[v[i]%x][v[i]%y]++;
        
    }
    long long total = 0;
    
    auto cmp = [&](int val){
        return (x -(val%x))%x;
    };
    
    for(auto a:v) total += mp[cmp(a)][a%y] - (a%x==cmp(a));
    cout<<(total/2)<<endl;
}




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin>>t;
    while(t--){
        temp();
    }
}
