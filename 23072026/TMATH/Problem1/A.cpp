//https://oj.tmathcoding.vn/contest/9b3230726/task/0


#include<bits/stdc++.h>
using namespace std;
void in(long long a[],long long n) {
	for(long long i = 1; i <= n; i++)
		cout << a[i] << " ";
}
long long a[1000000],n;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	for(long long i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
}
