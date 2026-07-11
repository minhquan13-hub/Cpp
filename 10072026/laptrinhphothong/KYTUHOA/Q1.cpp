//https://laptrinhphothong.vn/problem/n0603a


#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin >> s;
	for(long long i = 0; i<=s.size(); i++) {
		if(s[i] >= 'A' and s[i] <= 'Z') s[i] = s[i] + 32;
	}
	for(long long i = 0; i<=s.size(); i++) {
		if(s[i] >= 'a' and s[i] <= 'z') s[i] = s[i] - 32;
	}
	cout << s;
}
