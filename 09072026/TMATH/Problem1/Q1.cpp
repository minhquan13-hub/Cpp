//https://oj.tmathcoding.vn/contest/9b3090726/task/0



#include<bits/stdc++.h>
using namespace std;
string s;
long long k;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> s >> k;
	s = s.substr(k,s.size());
	cout << s;
}
