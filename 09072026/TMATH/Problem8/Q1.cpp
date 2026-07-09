//https://oj.tmathcoding.vn/contest/9b3090726/task/7



#include<bits/stdc++.h>
using namespace std;
string s;
long long n , k = 0;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n >> s;
	for(long long i = 0; i<=s.size(); i++) {
		if(s[i] == 'x' and s[i+1] == 'x') {
			if(s[i+2] == 'x') k++;
		}
	}
	cout << k;
}
