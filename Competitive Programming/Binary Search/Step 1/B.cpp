
 
#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
ll binarysearch(ll arr[],ll l,ll r,ll val)
{
   
    
    ll mid=(l+r)/2;
    
    if(r-l==1  && arr[mid]<=val)
    {
        return r;
    }
    if(r-l==1 && arr[mid]>val)
    {
        return 0;
    }
    if(arr[mid]>val)
    {
        return binarysearch(arr,l,mid,val);
    }else if(arr[mid]<=val)
    {
        return binarysearch(arr,mid,r,val);
    }
    return 0;
    
}
 
int main()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(k--)
    {
        ll val;
        cin>>val;
        cout<<binarysearch(arr,-1,n,val)<<endl;
        
    }
    return 0;
}
