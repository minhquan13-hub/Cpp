//https://oj.tmathcoding.vn/contest/9b3230726/task/9


#include<bits/stdc++.h>
using namespace std;
long long a[100000],n,s=0,d=1;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	for(long long i = 2; i <= n; i++) {
		if(a[i] == a[i-1]) d++;
		else d = 1;
		if(a[i] > 0) s = s + (d-1) * (d-2)/2;
	}
	cout << s;
}
