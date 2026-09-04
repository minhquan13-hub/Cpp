//https://oj.tmathcoding.vn/contest/9b3090826/task/5


#include<bits/stdc++.h>
using namespace std;
long long a[200005],b[200005],n,d=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
		if(a[i] < 0) {
			d++;
			b[d] = a[i];
		}
	}
	sort(b+1,b+d+1);
	d = 1;
	for(long long i = 1; i <= n; i++) {
		if(a[i] >= 0) cout << a[i] << " ";
		else  {
			cout << b[d] << " ";
			d++;
		}
	}
}
