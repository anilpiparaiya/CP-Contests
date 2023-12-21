#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i,a,b) for(ll i=a; i<b ;i++)

bool subset_sum(int a[], int n, int sum){
    if(sum==0)
        return true;
    if(n==0 && sum!=0)
        return false;
    if(a[n-1]>sum)
        return subset_sum(a,n-1,sum);
    return subset_sum(a,n-1,sum-a[n-1]) || subset_sum(a,n-1,sum);
}

int main(){
    int a[] = {3, 34, 4, 12, 5, 2};
    int n = sizeof(a)/sizeof(a[0]);
    int sum;
    scanf("%d",&sum);
    cout<<subset_sum(a,n,sum);
    return 0;
}
