//https://oj.tmathcoding.vn/contest/9b3020826/task/0


#include<bits/stdc++.h>
using namespace std;
long long a,b,s=0;
int main() {
	cin >> a >> b;
	for(long long i = a; i <= b; i++) {
		if(i%2 != 0) s = s + i;
	}
	cout << s;
}
