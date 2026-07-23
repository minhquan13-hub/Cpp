//https://oj.tmathcoding.vn/contest/9b3190726/task/4


#include<bits/stdc++.h>
using namespace std;
long long tsnt[30],n,k=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 2; i*i <= n; i++) {
		if(n%i==0) {
			k++;
			tsnt[k] = i;
			while(n%i==0) n = n/i;
		}
	}
	if(n>1) {k++;tsnt[k] = n;};
	sort(tsnt + 1, tsnt + k + 1, greater<long long>());
	for(long long i = 1; i <= k; i++) {
		cout << tsnt[i] << " ";
	}
}
