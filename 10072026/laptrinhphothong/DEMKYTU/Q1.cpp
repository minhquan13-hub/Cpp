//https://laptrinhphothong.vn/problem/n0602a


#include<bits/stdc++.h>
using namespace std;
string s;
char a;
long long d=0;
int main() {
	cin >> s >> a;
	for(long long i = 0; i<=s.size(); i++) {
		if(s[i] == a) d++;
	}
	cout << d;
}
