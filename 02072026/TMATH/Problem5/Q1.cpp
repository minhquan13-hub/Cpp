//https://oj.tmathcoding.vn/contest/9b3020726/task/4


#include<bits/stdc++.h> 
using namespace std;
string s;
long long k = 0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> s;
	for(long long i = 0; i<s.size(); i++) {
		if(s[i]>='A' and s[i]<='Z') s[i] = s[i] + 32;
	}
	for(long long i = 0; i<s.size(); i++) {
		if(s[i]>='a' and s[i]<='z') {
			s[i] = s[i] - 32;
			cout << s[i];
		}
	}
} 
