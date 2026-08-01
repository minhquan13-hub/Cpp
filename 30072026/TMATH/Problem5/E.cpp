//https://oj.tmathcoding.vn/contest/9b3300726/task/4


#include<bits/stdc++.h>
using namespace std;
long long n,mod = 1000000000+7;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    long long s = 0;
	for(long long i = 1; i <= n; i++) {
		s = (s + (i*i*i)%mod)%mod;
	}
    cout << s;
}
