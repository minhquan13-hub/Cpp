//https://oj.tmathcoding.vn/contest/9b3280626/task/7


#include<bits/stdc++.h>
using namespace std;


bool check(long long n) {
	for(long long i = 2; i * i <= n; i++) {
		if(n%i==0) return false;
	}
	return n > 1;
}
long long n,s=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(long long i = 1; i <= n; i++) {
    	if(check(i)==true) {
    		s = s + i;
    		cout << i;
		}
    	if(s==n) break;
	}
}

