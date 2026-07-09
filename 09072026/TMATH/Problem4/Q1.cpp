//https://oj.tmathcoding.vn/contest/9b3090726/task/3



#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> s;
	if(s[0] >= 'a' and s[0] <='z') s[0] = s[0] - 32;
	cout << s;
}
