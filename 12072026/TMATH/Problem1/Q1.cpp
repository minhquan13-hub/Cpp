//https://oj.tmathcoding.vn/contest/9b3120726/task/0


#include<bits/stdc++.h>
using namespace std;
bool check(long long n) {
	for(long long i = 2; i*i<=n; i++) 
	if(n%i==0) return false;
	return n > 1;
}
long long n,t;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> t;
	while(t--) {
		cin >> n;
		if(check(n) == true) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
}
