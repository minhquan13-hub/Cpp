//https://oj.tmathcoding.vn/contest/9b3280726/task/3


#include<bits/stdc++.h>
using namespace std;
pair<long long, pair<long long,long long> > a[100005];
long long n;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i].second.first ;
	}
	for(long long i = 1; i <= n; i++) {
		cin >> a[i].second.second ;
	}
	for(long long i = 1; i <= n; i++) {
		a[i].first = -(a[i].second.first + a[i].second.second);
	}
	sort(a+1,a+n+1);
	for(long long i = 1; i <= n; i++) {
		cout << a[i].second.first << " " << a[i].second.second << "\n";
	}
}
