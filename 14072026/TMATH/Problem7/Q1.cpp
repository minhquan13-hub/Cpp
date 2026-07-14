//https://oj.tmathcoding.vn/contest/9b3140726/task/6


#include<bits/stdc++.h>
using namespace std;
string s;
long long n,d=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    cin >> s;
    if(s.size() != n) return 0;
    for(long long i = 0; i <= s.size(); i++) {
    	if(s[i] == 'x' and s[i-1] == 'x' and s[i-2] == 'x') d++;
	}
	cout << d;
}
