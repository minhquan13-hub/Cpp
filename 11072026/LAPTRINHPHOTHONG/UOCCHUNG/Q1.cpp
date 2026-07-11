//https://laptrinhphothong.vn/problem/n0803a



#include<bits/stdc++.h>
using namespace std;
long long a[1000005],n,ucln;
int main() {
	cin >> n;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
		ucln = __gcd(ucln,a[i]);
	}
	cout << ucln;
}
