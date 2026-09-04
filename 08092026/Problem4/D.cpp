//https://oj.tmathcoding.vn/contest/9b3090826/task/3


#include<bits/stdc++.h>
using namespace std;
struct toado {
	long long x,y;
};
bool cmp(toado a, toado b) {
	long long d = a.x + a.y;
	long long s = b.x + b.y;
	if(d != s) return d > s;
	return a.x < b.x;
}
toado a[100005];
long long n;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i].x;
	}
	for(long long i = 1; i <= n; i++) {
		cin >> a[i].y;
	}
	sort(a+1,a+n+1,cmp);
	for(long long i = 1; i <= n; i++) {
		cout << a[i].x << " " << a[i].y << "\n";
	}
}
