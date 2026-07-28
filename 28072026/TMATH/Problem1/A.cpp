//https://oj.tmathcoding.vn/contest/9b3280726/task/0


#include<bits/stdc++.h>
using namespace std;
pair<long long, long long> a[100005];
long long n;
int main() {
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i].first ;
	}
	for(long long i = 1; i <= n; i++) {
		cin >> a[i].second ;
	}
	sort(a+1,a+n+1);
	for(long long i = 1; i <= n; i++) {
		cout << a[i].first << " " << a[i].second << "\n";
	}
}
