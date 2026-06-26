//https://oj.tmathcoding.vn/problem/b01c0000lu


#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
int main() {
	cin >> a >> b >> c;
	if(a+b>c and a+c>b and b+c>a) cout << "YES";
	else cout << "NO";
}
