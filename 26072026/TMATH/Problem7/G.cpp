//https://oj.tmathcoding.vn/contest/9b3260726/task/6


#include<bits/stdc++.h>
using namespace std;
bool scp(long long n) {
	long long m = round(sqrt(n));
	if(m*m == n) return true;
	else return false;
}
long long a[100005],n,s=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
		if(scp(a[i]) == true) s++;
	}
	cout << s;
} 
