//https://oj.tmathcoding.vn/contest/9b3090726/task/6



#include<bits/stdc++.h>
using namespace std;
string s;
long long n;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n >> s;
	string a = s.substr(0,n/2);
	string b = s.substr(n/2,n);
	if(a==b) cout << a;
	else cout << -1;
}
