// Problem: A. Wrong Subtraction
// Contest: Codeforces - Codeforces Round 479 (Div. 3)
// URL: https://codeforces.com/contest/977/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;


int main(){
	int n, k;
	cin>>n>>k;
	
	while(k--){
		if(n % 10 == 0){
			n = n /10;
		}
		
		else{
			n = n-1;
		}
	}
	
	cout<<n;
	
	return 0;
}
