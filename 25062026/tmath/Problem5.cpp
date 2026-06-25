//https://oj.tmathcoding.vn/contest/9b3250626/task/4


#include<bits/stdc++.h>
using namespace std;
long long a[1000005],n,k;
int main() {
	cin >> n >> k;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
		if(i!=k) cout << a[i] << " ";
	}
}
