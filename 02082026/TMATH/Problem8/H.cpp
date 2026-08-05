//https://oj.tmathcoding.vn/contest/9b3020826/task/7


#include<bits/stdc++.h>
using namespace std;
long long n,k,d=0;
long long gtnn = 1e18;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    long long m = pow(10,k-1);
	for(long long i = m; i <= n; i++) {
		if(n%i == 0) {
			if(i >= m) gtnn = min(gtnn,i);
			if(gtnn >= m) gtnn = min(gtnn,n/i);
		}
	}
	if(gtnn == 1e18) cout << -1;
	else cout << gtnn;
}
