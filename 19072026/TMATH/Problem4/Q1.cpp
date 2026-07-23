//https://oj.tmathcoding.vn/contest/9b3190726/task/3


#include<bits/stdc++.h>
using namespace std;
long long n;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	cout << n << " = ";
	for(long long i = 2; i*i <= n; i++) {
		if(n%i==0) {
			long long k = 0; 
			while(n%i==0) {
				k++;
				n = n / i;
			}
			cout << i << "^" << k << " * ";
		}
	}
	if(n>1) cout << n << "^1";
}
