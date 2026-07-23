//https://oj.tmathcoding.vn/contest/9b3190726/task/6


#include<bits/stdc++.h>
using namespace std;
bool check(long long x) {
	for(long long i = 2 ; i*i<=x ; i++)
		if(x%i==0) return false ;
		return x > 1 ;
}
long long n,gtln = -1e18;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 2; i <= n; i++) {
		if(n%i==0 and check(i) == true and i > gtln) gtln = i;
		}
	cout << gtln;
}
