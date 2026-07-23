//https://oj.tmathcoding.vn/contest/9b3210726/task/8


#include<bits/stdc++.h>
using namespace std;
long long a[10003],n,k;
void in(long long a[], long long n) {
	for(long long i = 1; i<= n ; i++) {
		cout << a[i] << " ";
	}
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(long long i = 1; i <= k; i++) {
		sort(a+1,a+k+1,greater<long long>());
	}
	in(a,n);
}
