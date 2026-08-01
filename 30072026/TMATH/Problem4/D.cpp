//https://oj.tmathcoding.vn/contest/9b3300726/task/3


#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
 long long nhan(long long a, long long b, long long c) {
    if(b == 0) return 0;
    long long tam = nhan(a,b/2,c);
    if(b % 2 == 0) {
    	tam = (tam + tam)%c;
	}
	else {
		tam = (tam + tam + a) % c;
	}
	return tam;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> a >> b >> c;
    cout << nhan(a,b,c);
}
