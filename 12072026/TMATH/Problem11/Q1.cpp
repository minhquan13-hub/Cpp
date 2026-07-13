//https://oj.tmathcoding.vn/contest/9b3120726/task/10


#include<bits/stdc++.h>
using namespace std;
bool check(long long n) {
	for(long long i = 2; i*i<=n; i++) 
	if(n%i==0) return false;
	return n > 1;
}
long long a[1000005],n,s;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(long long i = 1; i<=n; i++) {
    	cin >> a[i];
    	if(check(a[i]) == true) s++;
	}
	cout << s;
}

