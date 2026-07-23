//https://oj.tmathcoding.vn/contest/9b3210726/task/7


#include<bits/stdc++.h>
using namespace std;
long long a[1000003],n;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	long long s = n / 2;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(long long i = 1; i <= n/2; i++) {
		sort(a+1,a+s+1);
		cout << a[i] << " ";
	}
	for(long long i = s+1; i <= n; i++) {
		sort(a+s+1,a+n+1, greater<long long>());
		cout << a[i] << " ";
	}
}
