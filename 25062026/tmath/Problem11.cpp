//https://oj.tmathcoding.vn/contest/9b3250626/task/10


#include<bits/stdc++.h>
using namespace std;
long long a,b,c,n,t;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin >> n >> t;
	while(t--) {
		cin >> a >> b >> c;
		long long s = 0;
		for(long long x = 0;x<=5;x++) {
			for(long long y = 0;y<=5-x;y++) {
				long long z = 5 - x - y;
				s = max(s,(a+x)*(b+y)*(c+z));
			}
		}
		cout << s << endl;
	}
	return 0;
}
