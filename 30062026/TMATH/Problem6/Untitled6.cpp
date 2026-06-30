//https://oj.tmathcoding.vn/contest/9b3300626/task/5



#include<bits/stdc++.h>
using namespace std;
long long a[100005],n,gtnn=1e18;
int main() {
	cin >> n;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
		if(a[i]>=10 and a[i]<=99 and a[i]%2==0 and a[i]<gtnn) gtnn = a[i];
	}
	if(gtnn == 1e18) cout <<"NO";
	else cout << gtnn;
} 
