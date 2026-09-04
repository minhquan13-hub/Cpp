//https://oj.tmathcoding.vn/contest/9b3090826/task/2


#include<bits/stdc++.h>
using namespace std;
pair<long long, long long> a[100005];
long long n;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i].first;
		a[i].first = a[i].first * -1;
	}
	for(long long i = 1; i <= n; i++) {
		cin >> a[i].second;
	}
	sort(a+1,a+n+1);
	for(long long i = 1; i <= n; i++) {
		cout << a[i].first*-1 << " " << a[i].second << "\n";
	}
}
