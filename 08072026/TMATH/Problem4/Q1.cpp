//https://oj.tmathcoding.vn/contest/9b3070726/task/3


#include<bits/stdc++.h>
using namespace std;
string s;
long long d = 0;
int main() {
	cin >> s;
	for(long long i = 0; i<=s.size(); i++) {
		if(s[i]>='A' and s[i]<='Z') s[i] = s[i] + 32;
	}
	if(s[0]>='a' and s[0]<='z') s[0] = s[0] - 32;
	cout << s;
}
