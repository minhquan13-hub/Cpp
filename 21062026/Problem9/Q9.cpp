//https://oj.tmathcoding.vn/contest/9b3210626/task/7

#include<bits/stdc++.h>
using namespace std;
bool check(long long x) {
	for(long long i = 2; i*i<=x ;i++)
		if(x%i==0) return false;
		return x > 1 ;
}
long long n,k;
int main() {
	ios_base::sync_with_stdio;
	cin.tie(0);cout.tie(0);
	cin >> n;
	
	long long k = n+1;	if(k<2) {
		cout << -1;
		return 0;
	}

	while(true) {
		if(check(k)==true) {
			cout << abs(k-n) << "\n";
			break;
		}
		k++;
	}
	return 0;

}
