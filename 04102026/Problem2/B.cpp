#include<bits/stdc++.h> 
using namespace std;
long long a[100005],n,t,x;
long long bs(long long l, long long r, long long x) {
	long long ans = -1;
	while(l <= r) {
		long long m = (l + r) / 2;
		if(a[m] <= x) {
			ans = a[m];
			l = m + 1;
		}
		else r = m - 1;
	}
	return ans;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(long long i = 1; i <= n; i++) {
    	cin >> a[i];
	}
	sort(a+1,a+n+1);
	cin >> t;
    while(t--) {
    	cin >> x;
    	cout << bs(1,n,x) << "\n";
	}
}
