//https://oj.tmathcoding.vn/contest/9b3120726/task/1


#include<bits/stdc++.h>
using namespace std;
bool check(long long n) {
	for(long long i = 2; i*i<=n; i++) 
	if(n%i==0) return false;
	return n > 1;
}
long long tong(long long n) {
	long long s = 0;
	while(n>0) {
		s = s + n % 10;
		n = n / 10;
	}
	return s; 
}
long long n;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    if(n < 100 or n > 999) return 0;
	if(check(tong(n)) == true) cout << "Yes" << "\n";
	else cout << "No" << "\n";
}
