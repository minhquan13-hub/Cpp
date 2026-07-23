//https://oj.tmathcoding.vn/contest/9b3230726/task/8


#include<bits/stdc++.h>
using namespace std;
long long a[50],n,m,sl=1,ans=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1,a+n+1, greater<long long>());
	for(long long i = 1; i <= n and sl < m; i++) {
		sl = sl + a[i] -1;
		ans++;
	}
	if(sl >= m) cout << ans;
	else cout << -1;
}
