//https://oj.tmathcoding.vn/contest/9b3020726/task/8


#include<bits/stdc++.h> 
using namespace std;
string s;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	getline(cin,s);
	for(long long i = 0; i<=s.size(); i++) {
		if(s[i]>='a' and s[i]<='z' or s[i]>='A' and s[i]<='Z') cout << s[i];
	}
} 
