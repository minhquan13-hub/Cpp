//https://oj.tmathcoding.vn/contest/9b3250626/task/9


#include<bits/stdc++.h>
using namespace std;
long long a[20005],n,t=2;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin >> n;
	for(long long i = 0; i<n; i++) {
		cin >> a[i];
	}
	for(long long i = n; i<2*n; i++) {
		cin >> a[i];
	}
	sort(a,a+2*n,greater<long long>());
	for(long long i = 0; i<2*n; i++) {
		cout << a[i] <<" ";
	}
}
