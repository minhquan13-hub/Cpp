//https://oj.tmathcoding.vn/contest/9b3230626/task/7
#include<bits/stdc++.h>
using namespace std;
long double a[105],s=0,x;
long long n;
int main() {
	cin >> n >> x;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
	}
	for(long long i = 1; i<=n; i++) {
		if(a[i]<0) {
			cout << setprecision(2) << fixed << a[i];
			break;
		}
	}
	cout << " ";
	for(long long i = 1; i<=n; i++) {
		if(a[i]>0) s = a[i];
	}
	cout<< setprecision(2) << fixed << s << "\n";
	for(long long i = 1; i<=n; i++) {
		if(a[i]==x) cout << i << " ";
	}
}
