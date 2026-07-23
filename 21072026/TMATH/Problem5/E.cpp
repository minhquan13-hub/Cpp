//https://oj.tmathcoding.vn/contest/9b3210726/task/4


#include<bits/stdc++.h>
using namespace std;
void in(long long a[], long long n) {
	for(long long i = 1; i<= n ; i++) {
		cout << a[i] << " ";
	}
}
long long a[100003],n;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	in(a,n);
}
