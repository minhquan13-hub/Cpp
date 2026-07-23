//https://oj.tmathcoding.vn/contest/9b3210726/task/12


#include<bits/stdc++.h>
using namespace std;
long long a[100003],n,k,s=1;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for(long long i = 1; i <= n-1; i++) {
		cin >> a[i];
	}
	sort(a+1,a+n+1,greater<long long>());
	for(long long i = 1; i <= n-1; i++) {
		if(k < a[i]) s++;
	}
	cout << s;
} 
