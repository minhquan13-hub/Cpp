//https://oj.tmathcoding.vn/contest/9b3280626/task/4


#include<bits/stdc++.h>
using namespace std;
bool songuyento(long long n) {
	for(long long i = 2;i*i<=n;i++) 
		if(n%i==0) return false;
		return n > 1;
}
long long demuoc(long long n) {
	long long s = 0;
	for(long long i = 1; i*i <= n; i++)
		if(n%i==0) {
			s++;
			if(i!=n/i) s++;
		}
	return s;
}
long long tongchuso(long long n) {
	long long s = 0;
	while(n>0) {
		s = s + n%10;
		n = n / 10;
	}
	return s;
}
long long n,s=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	cout << demuoc(n);
}
