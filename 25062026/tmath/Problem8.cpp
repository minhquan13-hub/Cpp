//https://oj.tmathcoding.vn/contest/9b3250626/task/7

#include<bits/stdc++.h>
using namespace std;
long long a[105],n;
int main() {
	cin >> n;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
		if(a[i]%2==0) a[i] = a[i]/2;
		else a[i] = a[i]+1;
	}
	sort(a+1,a+n+1) ;
	for(long long i = 1; i<=n; i++) {
		cout << a[i] <<" ";
	}
	
	
}
