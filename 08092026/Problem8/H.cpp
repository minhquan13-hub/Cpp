//https://oj.tmathcoding.vn/contest/9b3090826/task/7


#include<bits/stdc++.h>
using namespace std;
long long a[100005],n,m,d=0,k=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1,a+n+1,greater<long long>());
	if(m == 1) cout << 0;
	else {
		for(long long i = 1; i <= n; i++) {
		if(a[i] >= m) {
			d++; m = 0;
			break;
		}
		else {
			d++;
			m = m - (a[i]-1);
		}
	}
	if(m > 0) cout << -1;
	else cout << d;
	}
}
