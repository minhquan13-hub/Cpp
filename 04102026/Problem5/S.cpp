#include<bits/stdc++.h> 
using namespace std;
long long a[100005],n,m,sum;
bool check(long long h) {
	sum = 0;
	for(long long i = 1; i <= n; i++) {
		sum += (a[i] + h - 1) / h;
	}
	return sum <= m;
} 
long long bsmin(long long l, long long r) {
	long long ans = l-1;
	while(l <= r) {
		long long mid = (l + r) / 2;
		if(check(mid)) {
			ans = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	return ans;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> m >> n;
    for(long long i = 1; i <= n; i++) {
    	cin >> a[i];
	}
	cout << bsmin(1,1e9);
}
