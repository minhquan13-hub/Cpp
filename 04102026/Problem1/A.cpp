#include<bits/stdc++.h> 
using namespace std;
long long a[100005],n,t,x;
bool bs(long long l, long long r, long long x) {
	while(l <= r) {
		long long m = (l + r) / 2;
		if(a[m] == x) return true;
		else if(a[m] < x) l = m + 1;
		else r = m - 1;
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(long long i = 1; i <= n; i++) {
    	cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	cin >> t;
    while(t--) {
    	cin >> x;
    	if(bs(1,n,x)) cout << "Y" << "\n";
    	else cout << "N" << "\n";
	}
}
