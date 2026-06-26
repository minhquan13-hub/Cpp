//https://oj.tmathcoding.vn/problem/b02b000001
#include<bits/stdc++.h>
using namespace std;
long double a[1005];
long long n;
int main() {
	cin >> n;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	for(long long i = 1; i<=n; i++) {
		cout << setprecision(2) << fixed << a[i] << " ";
	}
	cout << "\n";
	sort(a+1,a+n+1, greater<long double>()) ;
	for(long long i = 1; i<=n; i++) {
		cout << setprecision(2) << fixed << a[i] << " ";
	}
}
