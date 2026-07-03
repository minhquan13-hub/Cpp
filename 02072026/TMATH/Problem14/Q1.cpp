//https://oj.tmathcoding.vn/contest/9b3020726/task/13





#include<bits/stdc++.h> 
using namespace std;
string s;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	getline(cin,s);
	string d ;	
	for(long long i = 0; i<=s.size(); i++) {
		if(s[i]%2!=0) d = d + s[i];
	}
	string k = d;
	reverse(k.begin(),k.end());
	if(k==d) cout << "YES";
	else cout << "NO";
} 
