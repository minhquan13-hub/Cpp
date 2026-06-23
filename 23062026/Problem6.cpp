//https://oj.tmathcoding.vn/contest/9b3230626/task/5
#include<bits/stdc++.h>
using namespace std;
long long n,l,r,a[1003],cnt[1003]={0};
int main() {
	cin >> n >> l >> r;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	}
	for(long long x = l; x<=r; x++)
		if(cnt[x]==0)
		cout << x << " "; 
}
