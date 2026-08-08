//https://oj.tmathcoding.vn/contest/9b3060826/task/5


#include<bits/stdc++.h> 
using namespace std;
long long so(long long x) {
	long long s = 1;
	s = s * (x%10);
	x = x / 10;
	return s;
}
long long m,k;
int main () {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> m;
	long long i = 10;
	while(true) {
		if(so(i) == m) {
			cout << i;
			return 0;
		}
		i++;
	}
	cout << -1;
}
