#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i,a,b) for(ll i=a; i<b ;i++)
bool find_numbers(int a[], int n, int sum){
    int l,r;
    f(i,0,n-2){
        l = i+1;
        r = n-1;
        while(l<r){
            if(a[i]+a[l]+a[r]==sum){
                cout<<a[i]<<" "<<a[l]<<" "<<a[r];
                return true;
            }
            if(a[i]+a[l]+a[r]<sum)
                l++;
            else
                r--;
        }
    }
    return false;
}
int main(){
    int a[] = {12,3,4,1,6,9};
    int n=sizeof(a)/sizeof(a[0]);
    int sum;
    sort(a, a+n);
    scanf("%d",&sum);
    find_numbers(a,n,sum);
    return 0;
}
