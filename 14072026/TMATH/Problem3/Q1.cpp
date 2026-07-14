//https://oj.tmathcoding.vn/contest/9b3140726/task/2


#include<bits/stdc++.h>
using namespace std;
string a,b;
long long s = 0,d = 0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    getline(cin,a);
    getline(cin,b);
	for(long long i = 0; i<=a.size(); i++) {
		if(a[i+1] == ' ') s++;
		if(i == a.size()) s++;
	}
	for(long long i = 0; i<=b.size(); i++) {
		if(b[i+1] == ' ') d++;
		if(i == b.size()) d++;
	}
	cout << d + s;
} 
