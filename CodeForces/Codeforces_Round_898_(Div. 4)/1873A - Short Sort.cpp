// There are only 6 possible input strings, and they are all given in the input, so you can just output NO if s is bca or cab and YES otherwise.
// Another way to solve it is to count the number of letters in the wrong position. A swap changes 2
//  letters, so if at most two letters are in the wrong position, then it's possible, otherwise it's not possible.
// Of course, you can also brute force all possible swaps and check if it works.


#include <bits/stdc++.h>
 
using namespace std;
 
const int MAX = 200007;
const int MOD = 1000000007;
 
string alph = "abc";
 
void solve() {
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		cnt += (s[i] != alph[i]);
	}
	cout << (cnt <= 2 ? "YES\n" : "NO\n");
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();
}
