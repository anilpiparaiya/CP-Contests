// Problem: B. Two-gram
// Contest: Codeforces - Codeforces Round 479 (Div. 3)
// URL: https://codeforces.com/contest/977/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	string s;
	cin>>n>>s;
	
	if(n == 2){
		cout<<s;
		return 0;
	} 
	
	if(n == 3){
		cout<<s[0]<<s[1];
		return 0;
	}
	
	map<string, int>mp;
	
	for(int i=0; i<n; i++){
		++mp[s.substr(i, 2)];
	}
	
	int maxVal = 0;
	string maxPair = "";
	
	for(auto x: mp){
		if(x.second > maxVal){
			maxVal = x.second;
			maxPair = x.first;
		}
	}
	cout<<maxPair;
	return 0;
}
