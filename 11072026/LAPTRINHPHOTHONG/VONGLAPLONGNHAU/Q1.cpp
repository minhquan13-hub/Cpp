//https://laptrinhphothong.vn/problem/a03c000008



#include<bits/stdc++.h>
using namespace std;
long long a[106],n,gtln1 = -1e18,gtln2 = -1e18,gtnn = 1e18;
int main() {
	cin >> n;
	for(long long i = 1; i<=n; i++) {
		cin >> a[i];
	}
	for(long long i = 1; i<=n; i++) {
		if(a[i] > gtln1) gtln1 = a[i];
	}
	for(long long i = 1; i<=n; i++) {
		if(a[i] > gtln2 and a[i] != gtln1) gtln2 = a[i];
	}
	for(long long i = 1; i<=n; i++)  {
		if(a[i] < gtnn) gtnn = a[i];
	}
	cout << gtln1 - gtnn + gtln2;
}
