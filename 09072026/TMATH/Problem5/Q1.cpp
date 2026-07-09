//https://oj.tmathcoding.vn/contest/9b3090726/task/4



#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> s;
	string d;
	for(long long i = 0; i<=0; i++) {
		d = d + s[i];
	}
	s = s.substr(1,s.size()-1);
	cout << s << d;;
}
