// Problem: B. Vlad and Shapes
// Contest: Codeforces - Codeforces Round 928 (Div. 4)
// URL: https://codeforces.com/contest/1926/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include<bits/stdc++.h>
using namespace std;

void temp(){
	int n;
	cin>>n;
	
	set<int>dim;
	
	for(int i=0; i<n; i++){
		string s;
		cin>>s;
		int siz = 0;
		
		for(auto &a : s){
			siz += (a=='1');
		}
		
		if(siz) dim.insert(siz);
	}
	
	cout<<(dim.size()>1?"TRIANGLE":"SQUARE")<<"\n";
}
int main(){
	int t;
	cin>>t;
	
	while(t--){
		temp();
	}
}
