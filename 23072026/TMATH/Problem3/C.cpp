//https://oj.tmathcoding.vn/contest/9b3230726/task/2


#include<bits/stdc++.h>
using namespace std;
long long a[1000000],n;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	if(n%2!=0) return 0;
	long long s = n/2;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1,a+s+1);
	sort(a+s+1,a+n+1, greater<long long>());
	for(long long i = 1; i <= n; i++) {
		cout << a[i] << " ";
}
}
