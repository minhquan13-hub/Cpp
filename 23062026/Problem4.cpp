//https://oj.tmathcoding.vn/contest/9b3230626/task/3
#include<bits/stdc++.h>
using namespace std;
bool sodep(long long n) {
	while(n>0) {
		long long d = n%10;
		if(d!=6 and d!=8) return false;
		n/=10;
	}
	return true;
}
long long a[105],n,s=0;
int main() {
	cin >> n;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
		if(sodep(a[i])==true) s++;
	}
	cout<< s;
}
