//https://oj.tmathcoding.vn/contest/9b3020726/task/2


#include<bits/stdc++.h> 
using namespace std;
string s;
long long k = 0;
int main() {
	cin >> s;
	for(long long i = 0;i<s.size(); i++) {
		if(s[i]>='A' and s[i]<='Z') k++;
	}
	cout << k;
} 
