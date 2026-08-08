//https://oj.tmathcoding.vn/contest/9b3060826/task/3


#include<bits/stdc++.h> 
using namespace std;
bool cmp (long long a, long long b) {
	return a > b;
}
long long a[104],n,s=0,d=0;
int main () {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1,a+n+1,cmp);
	d= a[1];
	s = 1;
	for(long long i = 2; i <= n; i++) {
		if(d > 0) {
			d = min(d - 1, a[i]);
			s++;
		}
		else break;
	}
	cout << s;
}
