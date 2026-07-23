//https://oj.tmathcoding.vn/contest/9b3210726/task/13


#include<bits/stdc++.h>
using namespace std;
long long a[100003],n,s=0,gtln=-1e18;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n-1; i++) {
		cin >> a[i];
		s = s + a[i];
	}
	for(long long i = 1; i <= s; i++) {
		if(s%i==0) {
			if(s/i > gtln) gtln = i;
		}
	}
	cout << gtln;
}
