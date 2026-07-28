//https://oj.tmathcoding.vn/contest/9b3260726/task/2


#include<bits/stdc++.h>
using namespace std;
long long n,s=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i * i <= n; i++) {
		if(n%i == 0) {
			s++;
			if(n/i!=i) s++;
		}
	}
	cout << s;
} 
