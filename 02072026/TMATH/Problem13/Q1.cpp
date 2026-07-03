//https://oj.tmathcoding.vn/contest/9b3020726/task/12


#include<bits/stdc++.h> 
using namespace std;
string s;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	getline(cin,s);
	string d = s;
	reverse(d.begin(),d.end());
	if(s==d) cout << "YES";
	else cout << "NO";
} 
