//https://oj.tmathcoding.vn/contest/9b3260726/task/4


#include<bits/stdc++.h>
using namespace std;
long long a[100005],n,k,s=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1,a+n+1, greater<long long>());
	for(long long i = 1; i <= k; i++) {
		s = s + a[i];
	}
	cout << s;
} 
