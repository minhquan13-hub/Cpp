//https://oj.tmathcoding.vn/contest/9b3230626/task/8
#include<bits/stdc++.h>
using namespace std;
long long a[1000005],n,s=1;
int main() {
	cin >> n;
	for(long long i = 0; i<n; i++) {
		cin >> a[i];
	}
	sort(a,a+n);
	for(long long i = 1; i<n ; i++) {
		if(a[i]!=a[i-1]) s++;
	}
	cout << s;
}
