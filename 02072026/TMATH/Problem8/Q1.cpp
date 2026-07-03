//https://oj.tmathcoding.vn/contest/9b3020726/task/7


#include<bits/stdc++.h> 
using namespace std;
string s;
long long k = 0;
char ch;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	getline(cin,s);
	cin >> ch;
	for(long long i = 0; i<=s.size(); i++) {
		if(s[i]==ch) k++;
	}
	cout << k;
} 
