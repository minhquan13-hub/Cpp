//https://oj.tmathcoding.vn/contest/9b3060826/task/2


#include<bits/stdc++.h> 
using namespace std;
bool cmp (long long a, long long b) {
	return a > b;
}
long long a[1004],n,s;
int main () {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(long long i = 1; i <= n; i++) {
		if(a[i] <= 0) break;	
		s = s + a[i];
		for(long long j = i + 1; j <= n; j++) {
			a[j] = a[j] - 1;
		}
	}
	cout << s;
}
