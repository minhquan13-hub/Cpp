//https://oj.tmathcoding.vn/contest/9b3070726/task/4


#include<bits/stdc++.h>
using namespace std;
string s,d;
int main() {
	getline(cin,s);
	d = s;
	reverse(d.begin(),d.end());
	if(s==d) cout << "YES";
	else cout << "NO";
}
