//https://oj.tmathcoding.vn/contest/9b3300726/task/6


#include<bits/stdc++.h>
using namespace std;
long long t,a,b,n,mod = 1000000000+7,d=1;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    long long s = 0;
    for(long long i = 1; i <= n; i++) {
    	d = d*i%mod;
    	s = (s+d)%mod;
	}
	cout << s;
}
