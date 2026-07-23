//https://oj.tmathcoding.vn/contest/9b3210726/task/0


#include<bits/stdc++.h>
using namespace std;
long long a[1003],n,s=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(long long i = 1; i <= n; i++) {
		for(long long j = i + 1; j <= n; j++) {
			if(a[i] > a[j]) {
				swap(a[i],a[j]);
				s++;
			}
		}
	}
	cout << s;
} 
