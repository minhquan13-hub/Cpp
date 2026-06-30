//https://oj.tmathcoding.vn/contest/9b3300626/task/3



#include<bits/stdc++.h>
using namespace std;
long long a[1000005],n;
int main() {
	cin >> n;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
	}
	for(long long i = 1; i<=n;i++) {
		if(a[i]%2==0) cout << a[i] << " ";
	}	
	cout << "\n";
	for(long long i = 1; i<=n;i++) {
		if(a[i]%2!=0) cout << a[i] << " ";
	}
} 
