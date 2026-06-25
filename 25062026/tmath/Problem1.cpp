//https://oj.tmathcoding.vn/contest/9b3250626/task/0


#include<bits/stdc++.h>
using namespace std;
long double a[1000005],n,gtln=-1e18,gtnn=1e18;
int main() {
	cin >> n;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
		if(a[i]>gtln) gtln = a[i];
		if(a[i]<gtnn) gtnn = a[i];
	}
	cout << setprecision(2) << fixed << gtln << " " << gtnn;
}
