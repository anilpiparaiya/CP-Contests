// https://cses.fi/paste/59fbcb9e1c4efcc080297a/

#include<bits/stdc++.h>
using namespace std;
 
 
const int MOD = 1000000007;
 
int main(){
    int n;
    cin>>n;
    
    if(n%4==1 or n%4==2){
        cout<<"NO";
        return 0;
    }
    
    cout<<"YES"<<endl;
    if(n%4==0){
        cout<<n/2<<endl;
        for(int i=1;i<n-i+1;i+=2)cout<<i<<" "<<n-i+1<<" ";
        cout<<endl<<n/2<<endl;
        for(int i=2;i<n-i+1;i+=2)cout<<i<<" "<<n-i+1<<" ";
        cout<<endl;
    }
    else{
        cout<<n/2 +1<<endl;
        cout<<1<<" "<<2<<" ";
        for(int i=4;i<n-i+4;i+=2)cout<<i<<" "<<n-i+4<<" ";
        cout<<endl<<n/2<<endl;
        cout<<3<<" ";
        for(int i=5;i<n-i+4;i+=2)cout<<i<<" "<<n-i+4<<" ";
        
    }
    return 0;
 
}