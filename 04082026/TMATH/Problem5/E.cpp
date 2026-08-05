//https://oj.tmathcoding.vn/contest/9b3040826/task/4

#include<bits/stdc++.h>
using namespace std;
struct hs {
	string ten;
	long long toan,tin;
};
bool cmp(hs a, hs b) {
	if(a.tin != b.tin) return a.tin < b.tin;
	if(a.toan != b.toan) return a.toan > b.toan;
	return a.ten < b.ten;
}
hs a[100005];
long long n;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i].ten >> a[i].toan >> a[i].tin;
	}
	sort(a+1,a+n+1,cmp);
	for(long long i = 1; i <= n; i++) {
		cout << a[i].ten << " " << a[i].toan << " " << a[i].tin << "\n";
	}
}
