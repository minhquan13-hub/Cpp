//https://oj.tmathcoding.vn/problem/a09b000009


#include<bits/stdc++.h> 
using namespace std;
long long n;
int main() {
	cin >> n;
	for(long long i = n; i>=1;i--) {
		if(n%i==0) cout << i << " ";
	}
}
