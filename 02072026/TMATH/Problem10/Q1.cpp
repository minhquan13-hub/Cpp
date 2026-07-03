//https://oj.tmathcoding.vn/contest/9b3020726/task/9


#include<bits/stdc++.h> 
using namespace std;
string s;
long long k = 0;
int main() {
	cin >> s;
	for(long long i = 0;i<s.size(); i++) {
		if(s[i]!='0' and s[i]!='1') {
			cout << "-1";
			return 0;
		}
	}
	for(long long i = 0;i<s.size(); i++) {
		if(s[i]=='0' and s[i+1]=='1') k++;
	}
	cout << k;
} 
