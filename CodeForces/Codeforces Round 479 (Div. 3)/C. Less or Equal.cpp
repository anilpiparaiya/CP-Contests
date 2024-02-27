// Problem: C. Less or Equal
// Contest: Codeforces - Codeforces Round 479 (Div. 3)
// URL: https://codeforces.com/contest/977/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	for(int i=0; i<n; i++)cin>>v[i];
	sort(v.begin(),v.end());
	
	if(k==0){
		if(v[0]==1)cout<<"-1";
		else cout<<v[0]-1;
	} 
	else{
		
			if(v[k-1]==v[k])cout<<-1;
			else cout<<v[k-1];
		
		
	}
	
	
	
}
