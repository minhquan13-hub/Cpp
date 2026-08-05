//https://oj.tmathcoding.vn/contest/9b3040826/task/11

#include<bits/stdc++.h>
using namespace std;
struct so {
	long long a,b;
};
so a[100005];
long long n;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i].a >> a[i].b;
	}
	for(long long i = 1; i <= n; i++) {
		for(long long j = i + 1; j <= n; j++) {
			if(a[i].a % 2 == 0 and a[j].a % 2 == 0 and a[i].a > a[j].a) swap(a[i].a,a[j].a);
			if(a[i].a % 2 != 0 and a[j].a % 2 != 0 and a[i].a > a[j].a) swap(a[i].a,a[j].a);
			if(a[i].b > a[j].b) swap(a[i].b,a[j].b);
		}
	}
	for(long long i = 1; i <= n; i++) {
		cout << a[i].a << " " << a[i].b << "\n";
	}
}
