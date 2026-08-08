//https://oj.tmathcoding.vn/contest/9b3060826/task/0


#include<bits/stdc++.h> 
using namespace std;
pair<long long, long long> a[10004];
bool cmp (long long a, long long b) {
	return a < b;
}
long long n,s;
int main () {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> s >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	sort(a+1,a+n+1);
	for(long long i = 1; i <= n; i++) {
		if(s > a[i].first) s = s + a[i].second;
		else {
			cout << "NO" << "\n" << n - i + 1; 
			return 0;
	}
	
} 
	cout << "YES";
}
