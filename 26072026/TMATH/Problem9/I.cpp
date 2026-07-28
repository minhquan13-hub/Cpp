//https://oj.tmathcoding.vn/contest/9b3260726/task/8


#include<bits/stdc++.h>
using namespace std;
bool check(long long n) {
	for(long long i = 2; i * i <= n; i++) 
	if(n%i==0) return false;
	return n > 1;
}
long long t,n,s=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> t;
	while(t--) {
		s = 0;
		cin >> n;
		for(long long i = 2; i <= sqrt(n); i++) {
			long long dem = 0;
			while(n%i==0) {
				n = n / i;
				dem++;
			}
			s = s + dem;
		}
		if(n>1) s = s + 1;
		cout << s << "\n";
	}
} 
