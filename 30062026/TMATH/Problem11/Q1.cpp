//https://oj.tmathcoding.vn/contest/9b3300626/task/10

#include<bits/stdc++.h>
using namespace std;


long long demuocchan(long long n) {
	long long s = 0;
	for(long long i = 1;i*i<=n;i++) {
		if(n%i==0) {
			if(i%2==0) s++;
			if(i!=n/i and (n/i) % 2 == 0) s++;
		}
	}
	return s;
}
long long demuocle(long long n) {
	long long s = 0;
	for(long long i = 1;i*i<=n;i++) {
		if(n%i==0) {
			if(i%2!=0) s++;
			if(i!=n/i and (n/i) % 2 != 0) s++;
		}
	}
	return s;
}
long long n;
int main() {
	cin >> n;
	cout << demuocchan(n) << "\n" << demuocle(n);
}

