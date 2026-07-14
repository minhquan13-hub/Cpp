//https://oj.tmathcoding.vn/contest/9b3140726/task/5


#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> s;
    for(long long i = 0; i <= s.size(); i++) {
    	if(s[i] >= '0' and s[i] <='9') {
    		cout << s[i];
    		if(s[i+1] < '0' or s[i+1] >'9') cout << " ";
		}
	}
}
