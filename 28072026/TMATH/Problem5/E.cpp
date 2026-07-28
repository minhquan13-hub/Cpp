//https://oj.tmathcoding.vn/contest/9b3280726/task/4


#include<bits/stdc++.h>
using namespace std;
long long a[100005];
long long s=1e18,n,d=-1e18;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
		if(a[i] < s) s = a[i];
		if(a[i] > d) d = a[i];
	}
	long long k = __gcd(d,s);
	d = d / k;
	s = s / k;
	cout << s << " " << d;
}
