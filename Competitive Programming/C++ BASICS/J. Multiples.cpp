#include<iostream>
#include <iomanip>
using namespace std;
int main() {
	long long n,x;
	cin >> n>>x;
	if (n % x == 0 || x % n == 0)
		cout << "Multiples";
	else
		cout << "No Multiples";
 
}
