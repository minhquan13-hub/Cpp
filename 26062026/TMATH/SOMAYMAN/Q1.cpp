//https://oj.tmathcoding.vn/problem/b01c0000lu


#include<bits/stdc++.h>
using namespace std;
bool scp(long long n) {
	if(n < 0) return false ;
	long long can = round(sqrt(n));
	return can * can == n;
}
long long n,gtln;
int main() {
	cin >> n;
	for(long long i = 1; i<=n; i++) {
		if(scp(i)==true and i < n) gtln = i;
	}
	cout << gtln;
}
