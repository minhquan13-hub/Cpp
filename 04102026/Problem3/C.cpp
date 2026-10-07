#include<bits/stdc++.h> 
using namespace std;
long long a[1000005],n,m,sum;
bool check(long long h) {
	sum = 0;
	for(long long i = 1; i <= n; i++) {
		if(a[i] > h) sum += a[i] - h;
	}
	return sum >= m;
} 
long long bsmax(long long l, long long r) {
	long long ans = l-1;
	while(l <= r) {
		long long mid = (l + r) / 2;
		if(check(mid)) {
			ans = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}
	return ans;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(long long i = 1; i <= n; i++) {
    	cin >> a[i];
	}
	cout << bsmax(1,2e9);
}
