//https://oj.tmathcoding.vn/contest/9b3300726/task/8


#include<bits/stdc++.h>
using namespace std;
long long t,a,b,n,mod = 1000000000+7;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--) {
    	cin >> a >> b >> n;
    	long long f[n+5];
    	f[0] = a;
    	f[1] = b;
    	for(long long i = 2; i <= n; i++) {
    		f[i] = (3*f[i-1] - f[i-2] + mod)%mod;
		}
		cout << f[n] << "\n";
	}
}
