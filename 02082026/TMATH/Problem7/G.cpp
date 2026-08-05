//https://oj.tmathcoding.vn/contest/9b3020826/task/6


#include<bits/stdc++.h>
using namespace std;
string s;
long long n,k=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> s;
	for(long long i = 1; i < s.size(); i++) {
		if(s[i] == s[i-1]) {
			k++;
			s[i] = 0;
	}
	
}
	cout << k << "\n";
}
