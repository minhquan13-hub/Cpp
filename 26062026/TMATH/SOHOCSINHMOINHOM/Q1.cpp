//https://oj.tmathcoding.vn/problem/b01c000odd


#include<bits/stdc++.h>
using namespace std;
long long n,gtln=-1e18;
int main() {
	cin >> n;
	for(long long i = 1;i<=n;i++) {
		if(i>gtln and i%2!=0 and n%i==0) gtln = i;
	}
	cout << n / gtln << " " << gtln;
}
