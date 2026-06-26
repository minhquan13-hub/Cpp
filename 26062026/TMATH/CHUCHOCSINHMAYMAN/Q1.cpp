//https://oj.tmathcoding.vn/problem/b01d0000lu

#include<bits/stdc++.h>
using namespace std;
long long n,s=0;
int main() {
	cin >> n;
	for(long long i = 1;i<=n;i++) {
		if(i%5!=0 and i%5!=3) s = s + i;
	}
	cout << s;
}
