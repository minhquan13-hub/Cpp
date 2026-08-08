//https://oj.tmathcoding.vn/contest/9b3060826/task/4


#include<bits/stdc++.h> 
using namespace std;
pair<long long, long long> a[10004];
long long n,m,s=0;
int main () {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for(long long i = 1; i <= m; i++) {
		cin >> a[i].first >> a[i].second;
	}
	sort(a+1,a+m+1);
	for(long long i = 1; i <= m; i++) {
		if(n>=a[i].second) {
			n = n - a[i].second;
			s = s + a[i].first*a[i].second;
		}
		else {
			s = s + n * a[i].first;
			break;
		}
	}
	cout << s;
}
