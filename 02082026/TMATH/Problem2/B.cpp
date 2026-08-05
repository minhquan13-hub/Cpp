//https://oj.tmathcoding.vn/contest/9b3020826/task/1


#include<bits/stdc++.h>
using namespace std;
long long n,s=13;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	if(n<0) return 0;
	for(long long i = 1; i <= n; i++) {
		s = s + 3;
	}
	cout << s;
}
