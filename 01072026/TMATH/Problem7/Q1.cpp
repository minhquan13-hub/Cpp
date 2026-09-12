//https://oj.tmathcoding.vn/contest/9b3280626/task/6


#include<bits/stdc++.h>
using namespace std;


long long tonguoc(long long n) {
	long long s = 0;
	for(long long i = 1; i * i <= n; i++) {
		if(n%i==0) {
			s+=i;
			if(i!=n/i) s+=n/i;
		}
	}
	return s-n;
}

long long n,t=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	while(cin >> n and t < 10) {
		if(tonguoc(n)>n) cout << "1" <<"\n";
		else cout << "0" << "\n";
		t++;
	}
}

