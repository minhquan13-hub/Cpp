#include<bits/stdc++.h>
using namespace std;
string s;
long long k = -1e18,d;
int main() {
	getline(cin,s);
	for(long long i = 0; i <= s.size(); i++) {
		if(s[i] == ' ') {
			d = i;
			break;
		}
	}
	for(long long i = 0; i <= s.size(); i++) {
		if(s[i] == ' ' and s[i] > k) k = i;
	}
	cout << d << " " << k;
}
