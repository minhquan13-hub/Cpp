//https://oj.tmathcoding.vn/contest/9b3260726/task/3


#include<bits/stdc++.h>
using namespace std;
long long a,b,c,x,y,z;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> a >> b >> c >> x >> y >> z;
	long long s = a + b + c;
	long long d = x + y + z;
	cout << s*d/__gcd(s,d);
} 
