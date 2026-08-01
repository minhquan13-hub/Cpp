//https://oj.tmathcoding.vn/contest/9b3300726/task/7


#include<bits/stdc++.h>
using namespace std;
long long t,n,mod = 1000000000+7;
long long f[1000000+5];
   		

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    f[1] = 1;
    f[2] = 1;
    for(long long i = 3; i <= 1000000; i++) {
    	f[i] = (f[i-1] + f[i-2])%mod;
	}
    cin >> t;
    while(t--) {
    	cin >> n;
		cout << f[n] << "\n";
	}
}
