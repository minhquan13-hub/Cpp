//https://oj.tmathcoding.vn/contest/9b3020726/task/11





#include<bits/stdc++.h> 
using namespace std;
string s;
long long d = 1;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> s;
	for(long long i = 0; i<=s.size(); i++) {
		if(s[i]>='a' and s[i]<='z' and s[i+1] == ' ') d++; 
		else if(s[i]>='A' and s[i]<='Z' and s[i+1] == ' ') d++;
	}
	cout << d << "\n";
	for(long long i = 0; i<=s.size(); i++) {
		if(s[i]>='a' and s[i]<='z') {
			if(s[i+1]==' ') cout << s[i] << "\n";
			else cout << s[i] ;
			
		}
		else if(s[i]>='A' and s[i]<='Z') {
			if(s[i+1]==' ') cout << s[i] << "\n";
			else cout << s[i] ;
			
		}
	}
}
