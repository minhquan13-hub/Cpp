//https://oj.tmathcoding.vn/contest/9b3070726/task/0


#include<bits/stdc++.h>
using namespace std;
string s;
long long d = 0;
int main() {
	cin >> s;
	for(long long i = 0; i<=s.size(); i++) {
		if(s[i]>='0' and s[i]<='9') d = d + s[i] - 48;
	}
	cout << d;
}
