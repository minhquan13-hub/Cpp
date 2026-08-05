//https://oj.tmathcoding.vn/contest/9b3020826/task/2


#include<bits/stdc++.h>
using namespace std;
long long a,b,d=0,s=0;
long long tong(long long n) {
	long long s = 0;
	while(n>0) {
			s = s + (n%10)*(n%10);
			n = n / 10;
		}
	return s;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> a >> b;
	for(long long i = a; i <= b; i++) {
		if(tong(i)%2 == 0) d++;
	}
	cout << d;
}
