//https://oj.tmathcoding.vn/contest/9b3020826/task/5


#include<bits/stdc++.h>
using namespace std;
string s;
long long k = 0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	getline(cin,s);
	s = s + ' ';
	for(long long i = 1; i < s.size(); i++) {
		if(s[i] == ' ' and s[i-1] != ' ') k++;		
	}
	cout << k << "\n";
	string d = "";
	for(long long i = 0; i < s.size();i++) {
		if(s[i] != ' ') d = d + s[i];
	else {
		if(i >= 1 and s[i-1] != ' ') {
			cout << d << "\n";
			d = "";
		}
	}
}
}
