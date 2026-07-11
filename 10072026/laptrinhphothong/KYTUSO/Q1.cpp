//https://laptrinhphothong.vn/problem/n0604a


#include<bits/stdc++.h>
using namespace std;
string s;
long long d = 0;
int main() {
	cin >> s;
	for(long long i = 0; i<=s.size(); i++) {
		if(s[i] >= '0' and s[i] <= '9') d++;
	}
	cout << d;
}
