//https://oj.tmathcoding.vn/contest/9b3300626/task/0


#include<bits/stdc++.h>
using namespace std;
long long a[105],n,gtln=-1e18;
int main() {
	cin >> n;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
		if(a[i]<gtln) gtln = a[i];
	}
	cout << gtln;
} 
