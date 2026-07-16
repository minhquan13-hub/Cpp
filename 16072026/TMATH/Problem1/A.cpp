#include<bits/stdc++.h>
using namespace std;
long long a[1005],n,k;
int main() {
	cin >> n >> k;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(long long i = 1; i <= k; i++) {
		sort(a+1,a+k+1, greater<long long>());
	}
	for(long long i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
}
