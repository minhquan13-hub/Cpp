//https://oj.tmathcoding.vn/contest/9b3140726/task/11


#include<bits/stdc++.h>
using namespace std;
string s;
long long t;
long long d = 0; 
long long gtln = -1e18;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--) {
    	cin >> s;
    	for(long long i = 0; i <= s.size(); i++) {
    		if(s[i] < '0' or s[i] > '9') return 0;
    		if(s[i] >= '0' and s[i] <= '9') {
    			d = d + s[i] - '0';
			}
			if(i == s.size()) {
				if(d > gtln) gtln = d;
			}
		}
	}
	cout << gtln;
}
