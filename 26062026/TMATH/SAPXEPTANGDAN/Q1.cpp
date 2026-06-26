//https://oj.tmathcoding.vn/problem/b02a000001

#include<bits/stdc++.h>
using namespace std;
long long a[100005],n;
int main() {
	cin >> n;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	for(long long i = 1; i<=n; i++) {
		cout << a[i] << " ";
	}
}
