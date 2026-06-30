//https://oj.tmathcoding.vn/contest/9b3300626/task/9



#include<bits/stdc++.h>
using namespace std;
long long a[1005],n,s=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(long long i = 1; i<=n; i++) {
    	cin >> a[i];
	}
	for(long long i = 1; i<n;i++) {
		if(a[i] > a[i+1]) {
			cout << "NO"  <<"\n";
			cout << i + 1;
			return 0;
		}
	}
	cout << "YES";
}
