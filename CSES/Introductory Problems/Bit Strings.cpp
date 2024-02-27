// Problem: Bit Strings
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1617
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#define mod 1000000007
#include<bits/stdc++.h>
using namespace std;
 
int main(){
	
		int n;
		cin>>n;
		
		int ans = 1;
		
		for(int i=0; i<n; i++){
			ans = (2*ans)%mod; 
		}
		cout<<ans<<endl;
	
	return 0;
}
