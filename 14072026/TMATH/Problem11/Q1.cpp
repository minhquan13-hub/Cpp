//https://oj.tmathcoding.vn/contest/9b3140726/task/10


#include<bits/stdc++.h>
using namespace std;
long long t;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> t;
    long long d = 0;
    while(t--) {
    	string s;
    	long long gtnn = 1e18;
    	cin >> s;
    	for(long long i = 0; i <= s.size(); i++) {
    		if(s[i] >= 'A' and s[i] <= 'Z') cout << s[i];
    		if(s[i] >= '0' and s[i] <= '9' and s[i] - '0' < gtnn) gtnn = s[i] - '0'; 
		}
		cout << gtnn << "\n";
		d = d + gtnn;
		s.clear(); 
	}
	cout << d;
}
