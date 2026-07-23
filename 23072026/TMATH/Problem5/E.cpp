//https://oj.tmathcoding.vn/contest/9b3230726/task/4


#include<bits/stdc++.h>
using namespace std;
long long a[200000],n;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	for(long long i = 1; i <= n; i++) {
		cout << abs(a[i]) + abs(a[i+1]);
		return 0;
	}
}
