//https://oj.tmathcoding.vn/contest/9b3250626/task/1


#include<bits/stdc++.h>
using namespace std;
long double a[1000005],n;
int main() {
	cin >> n;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
		if(a[i]<0) cout << a[i] <<" ";
	}
}
