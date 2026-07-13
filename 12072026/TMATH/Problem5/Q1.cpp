//https://oj.tmathcoding.vn/contest/9b3120726/task/4


#include<bits/stdc++.h>
using namespace std;
bool check(long long n) {
	for(long long i = 2; i*i<=n; i++) 
	if(n%i==0) return false;
	return n > 1;
}
long long n,t,s=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--) {
    	cin >> n;
    	s = 0;
    	for(long long i = n; i<=n+6; i++) {
    		if(check(i) == true) s++;
		}
		if(s == 2) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
}
