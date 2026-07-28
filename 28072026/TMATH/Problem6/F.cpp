//https://oj.tmathcoding.vn/contest/9b3280726/task/5


#include<bits/stdc++.h>
using namespace std;
pair<long double, pair<long long,long long> > a[100005];
long long t;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> t;
	for(long long i = 1; i <= t; i++) {
		cin >> a[i].second.first;
		cin >> a[i].second.second;
		long long k = __gcd(a[i].second.first,a[i].second.second);
		a[i].second.first /= k;
		a[i].second.second /= k;
		k = 0;
	}
	for(long long i = 1; i <= t; i++) {
		a[i].first = (long double) a[i].second.first / a[i].second.second;
	}
	sort(a+1,a+t+1);
	for(long long i = 1; i <= t; i++) {
		cout << a[i].second.first << " " << a[i].second.second << "\n";
	}
}
