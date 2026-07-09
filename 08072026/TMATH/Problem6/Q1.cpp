//https://oj.tmathcoding.vn/contest/9b3070726/task/5


#include<bits/stdc++.h>
using namespace std;
string s,d;
int main() {
	getline(cin,s);
	for(long long i = 0; i<=s.size(); i++) {
		if(s[i]%2!=0) d = d + s[i];
	}
	string k = d;
	reverse(k.begin(),k.end());
	if(k==d) cout << "YES";
	else cout << "NO";
}
