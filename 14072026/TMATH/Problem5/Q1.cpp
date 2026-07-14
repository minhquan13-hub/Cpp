//https://oj.tmathcoding.vn/contest/9b3140726/task/4


#include<bits/stdc++.h>
using namespace std;
string a,b,c,s,d;
long long gtln = -1e18, gtnn = 1e18;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> a >> b >> c;
    string s = a + b + c;
	sort(s.begin(),s.end());
	reverse(s.begin(),s.end());
	cout << s;
}
