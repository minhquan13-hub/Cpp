//https://oj.tmathcoding.vn/contest/9b3300626/task/8



#include<bits/stdc++.h>
using namespace std;
long long a[100005],n,s=0,t;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> t;
	while(t--) {
		cin >> n;
		for(long long i = 1; i<=n; i++) {
			cin >> a[i];
		}
		long long max = 0;
		for(long long i = 1; i<=n; i++) {
			if(a[i]>=max) {
				s++;
				max = a[i];
			}
		}
		cout << s << "\n";
		s = 0;
	}
}
