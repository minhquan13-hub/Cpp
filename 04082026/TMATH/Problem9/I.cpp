//https://oj.tmathcoding.vn/contest/9b3040826/task/8

#include<bits/stdc++.h>
using namespace std;
struct hs {
	string tendoi;
	string tentruong;
	long long ac,pen;
};
bool cmp(hs a, hs b) {
	if(a.ac != b.ac) return a.ac > b.ac;
	return a.pen < b.pen;
}
hs a[100005];
long long n;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i].tendoi >> a[i].tentruong >> a[i].ac >> a[i].pen;
	}
	sort(a+1,a+n+1,cmp);
	for(long long i = 1; i <= n; i++) {
		cout << a[i].tendoi << " " << a[i].tentruong << "\n";
	}
}
