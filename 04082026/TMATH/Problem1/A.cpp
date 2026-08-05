//https://oj.tmathcoding.vn/contest/9b3040826/task/0

#include<bits/stdc++.h>
using namespace std;
struct ps {
	long long tu;
	long long mau;
};
bool cmp(ps a, ps b) {
	return a.tu * b.mau < a.mau * b.tu;
}
void rutgon(ps &a) {
	long long gcd = __gcd(a.tu,a.mau);
	a.tu = a.tu/gcd;
	a.mau = a.mau/gcd;
}
ps a[100005];
long long n;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i].tu >> a[i].mau;
		rutgon(a[i]);
	}
	sort(a+1,a+n+1,cmp);
	for(long long i = 1; i <= n; i++) {
		cout << a[i].tu << " " << a[i].mau << "\n";
	}
}
