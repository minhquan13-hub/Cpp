//https://oj.tmathcoding.vn/contest/9b3140726/task/7


#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> s;
    reverse(s.begin(),s.end());
    long long i = 1;
    long long n = s.size();
    string a = "";
    while(true) {
    	long long b = i*(i+1)/2;
    	if(b > n) break;
    	a = a + s[b - 1];
    	i++;
	}
	cout << a << "\n";
}
