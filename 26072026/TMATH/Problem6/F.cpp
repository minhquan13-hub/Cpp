//https://oj.tmathcoding.vn/contest/9b3260726/task/5


#include<bits/stdc++.h>
using namespace std;
long long a[1005],n,s,d=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n >> s;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	for(long long i = 1; i <= n; i++) {
		if(s>=a[i]) {
			s = s + a[i];
			d++;
			a[i] = 0;
		}
		if(s<a[i]) break;
	}
	cout << d;
} 
