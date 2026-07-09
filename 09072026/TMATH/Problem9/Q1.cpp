//https://oj.tmathcoding.vn/contest/9b3090726/task/8



#include<bits/stdc++.h>
using namespace std;
string s;
long long t;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> t;
	while(t--) {
		long long d = 0;
		cin >> s;
		long long first = s.find('1');
		long long last = s.rfind('1');
		for(long long i = first; i <= last; i++) {
			if(s[i] == '0') d++;
		}
		cout << d << "\n";
	}
}
