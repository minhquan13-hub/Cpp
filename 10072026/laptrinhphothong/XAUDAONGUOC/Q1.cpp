//https://laptrinhphothong.vn/problem/n0605b


#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin >> s;
	string d = s;
	reverse(d.begin(),d.end());
	if(s==d) cout << "YES" << "\n";
	else cout << "NO" << "\n";
}
