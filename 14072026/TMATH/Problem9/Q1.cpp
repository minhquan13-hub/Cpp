//https://oj.tmathcoding.vn/contest/9b3140726/task/8


#include<bits/stdc++.h>
using namespace std;
string s;
long long k , d = 0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> s >> k;
    for(long long i = 0; i <= s.size(); i++) {
    	if(s[i] == s[i+1]) d++;
	}
	if(d < k) cout << "NO";
	else cout << "YES";
}
