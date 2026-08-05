//https://oj.tmathcoding.vn/contest/9b3020826/task/8


#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
long long n;
long long s = 0;
long long d = 0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(long long i = 1; i <= n; i++) {
    	s = s + i*i + (i+1)*(i+1);
    	for(long long j = i+1; j <= n; j++) {
    	if(s == j*j) d++;
	}
}
	cout << d;
}
