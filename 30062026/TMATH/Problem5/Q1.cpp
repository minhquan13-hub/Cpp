//https://oj.tmathcoding.vn/contest/9b3300626/task/4



#include<bits/stdc++.h>
using namespace std;
long long a[100005],n,gtln=-1e18,s=0;
int main() {
	cin >> n;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
		if(a[i]>gtln) gtln = a[i];
	}
	for(long long i = 1; i<=n; i++) {
		if(a[i]==gtln) s++;
	}
	cout << s;
} 
