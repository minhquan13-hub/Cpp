//https://oj.tmathcoding.vn/contest/9b3230726/task/6


#include<bits/stdc++.h>
using namespace std;
long long a[200000],n,gtln = -1e18,gtnn = 1e18;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
		if(a[i] > gtln) gtln = a[i];
		if(a[i] < gtnn) gtnn = a[i];
	}
	cout << gtln - gtnn;
	/*sort(a+1,a+n+1);
	for(long long i = 1; i <= n; i++) {
		for(long long j = j + 1; j <= n; j++) {
			if(abs(i) + abs(j) > gtln) gtln = abs(a[i]) + abs(a[j]);
		}
	}
	cout << gtln;*/
}
