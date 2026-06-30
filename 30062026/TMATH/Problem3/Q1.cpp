//https://oj.tmathcoding.vn/contest/9b3300626/task/2



#include<bits/stdc++.h>
using namespace std;
long long a[1000005],n;
int main() {
	cin >> n;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
	}
	for(long long i = n; i>=1;i--) {
		cout << a[i] <<" ";
	}
} 
