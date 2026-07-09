//https://oj.tmathcoding.vn/contest/9b3070726/task/6




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
		if(s.size()<5) {
			cout << "Error!";
			continue;
		}
		for(long long i = 0; i<=s.size(); i++) {
			if(s[i]>='a' and s[i]<='z') d++;
			else if(s[i]>='A' and s[i]<='Z') d++;
			else if(s[i]>='0' and s[i]<='9') d++;
		}
		if(d==s.size()) cout << s.size();
		else cout << "Error!";
}
}
