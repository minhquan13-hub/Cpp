//https://oj.tmathcoding.vn/contest/9b3230626/task/6
#include<bits/stdc++.h>
using namespace std;
long long n,cnt[1000005];
int main() {
	cin >> n ;
	for(long long i = 1; i<=n; i++) {
		long long x ; 
		cin >> x;
		cnt[x+100]++;
	}
	for(long long x = 0; x<=200; x++) 
		if(cnt[x]>0)
		cout << x-100 << " " << cnt[x] << "\n";
}
