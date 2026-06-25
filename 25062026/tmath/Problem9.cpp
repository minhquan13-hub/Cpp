//https://oj.tmathcoding.vn/contest/9b3250626/task/8

#include<bits/stdc++.h>
using namespace std;
long long a[100005],n,gtnn=1e18;
int main() {
	cin >> n;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
		if(a[i]<gtnn) gtnn = a[i];
	}
	sort(a+1,a+n+1) ;
	for(long long i = 1; i<=n; i++) {
		if(a[i]>gtnn) {
			cout << a[i];
			break;
		}
	}
}
