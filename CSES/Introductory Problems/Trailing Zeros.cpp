// Problem: Trailing Zeros
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1618/
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#define mod 1000000007
#include<bits/stdc++.h>
using namespace std;
 
int main(){
		long long n;
		cin>>n;
		
		long long mul = 5;
		long long ans = 0;
		
		
		while(n >= mul){
			ans += n / mul;
			mul = mul * 5;
		}
		
		
		cout<<ans<<endl;
	
	return 0;
}
