//https://oj.tmathcoding.vn/contest/9b3260726/task/10


#include<bits/stdc++.h>
using namespace std;
bool check(long long n) {
	for(long long i = 2; i * i <= n; i++) 
	if(n%i==0) return false;
	return n > 1;
}
bool uoc(long long n) {
	for(long long i = 1; i * i <= n; i++) {
		if(n%i == 0) {
			return true;
			if(n/i!=i) return true;
		}
		else return false;
	}
}
long long a[1000005],n,s=0,k,gtln=-1e18;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for(long long i = 1; i <= n; i++) {
		if(uoc(n) == true and n%k==0) s++;
		if(uoc(n) == true and i > gtln) gtln = i;
	}
	if(s!=0) cout << s;
	else cout << gtln;
} 
