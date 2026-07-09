//https://oj.tmathcoding.vn/contest/9b3070726/task/1 


#include<bits/stdc++.h>
using namespace std;
string s;
long long gtln = -1e18;
int main() {
	cin >> s;
	for(long long i = 0; i<=s.size(); i++) {
		if(s[i]>='0' and s[i]<='9') {
			s[i] = s[i] - 48;
			if(s[i]>gtln) gtln = s[i];
		}
	}
	cout << gtln;
}
