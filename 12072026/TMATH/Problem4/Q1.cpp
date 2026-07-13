//https://oj.tmathcoding.vn/contest/9b3120726/task/3 


#include<bits/stdc++.h>
using namespace std;
long long sodaonguoc(long long n) {
	long long s = 0;
	while(n > 0) {
		s = s * 10 + n % 10;
		n = n / 10;
	}
	return s;
}
bool check(long long n) {
	for(long long i = 2; i*i<=n; i++) 
	if(n%i==0) return false;
	return n > 1;
}
long long a[105],n,d = 0,s = 0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    if(check(n) == true and check(sodaonguoc(n)) == true) cout << 1 << "\n";
    else cout << 0 << "\n";
}
