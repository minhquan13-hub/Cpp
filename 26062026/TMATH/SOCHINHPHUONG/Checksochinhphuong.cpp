//https://oj.tmathcoding.vn/problem/a04b000001

#include<bits/stdc++.h>
using namespace std;
bool scp(long long n) {
	if(n < 0) return false ;
	long long can = round(sqrt(n));
	return can * can == n;
}
long long n;
int main() {
	cin >> n;
	if(scp(n) == true) cout << "yes";
	else cout << "no";
}
