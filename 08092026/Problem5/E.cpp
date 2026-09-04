//https://oj.tmathcoding.vn/contest/9b3090826/task/4


#include<bits/stdc++.h>
using namespace std;
struct capso {
	long long x,y;
};
bool cmp(capso a, capso b) {
	if(a.x%2 != b.x%2) return a.x%2 < b.x%2;
	if(a.x != b.x) return a.x < b.x;
	return a.y > b.y;
}
capso a[1000005];
long long n;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i].x >> a[i].y;
	}
	sort(a+1,a+n+1,cmp);
	for(long long i = 1; i <= n; i++) {
		cout << a[i].x << " " << a[i].y << "\n";
	}
}
