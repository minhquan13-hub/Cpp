//https://oj.tmathcoding.vn/contest/9b3250626/task/3


#include<bits/stdc++.h>
using namespace std;
long long a[105],n,s=0;
int main() {
	cin >> n;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
		s = s + abs(a[i]-0);
	}
	cout << s;
}
