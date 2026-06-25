//https://oj.tmathcoding.vn/contest/9b3250626/task/2


#include<bits/stdc++.h>
using namespace std;
long long a[1000005],n,s=0,k=0;
int main() {
	cin >> n;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
		if(a[i]%2==0) s = s + a[i];
		else k = k + a[i];
	}
	
	
	cout << abs(s-k);
}
