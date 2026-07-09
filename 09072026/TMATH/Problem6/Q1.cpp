//https://oj.tmathcoding.vn/contest/9b3090726/task/5



#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> s;
	if(s[s.size()-1] == 'r' and s[s.size()-2] == 'e') cout << "er";
	else if (s[s.size()-1] == 't' and s[s.size()-2] == 's' and s[s.size()-3] == 'i') cout << "ist";
}
