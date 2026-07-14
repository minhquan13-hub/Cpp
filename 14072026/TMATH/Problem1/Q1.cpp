//https://oj.tmathcoding.vn/contest/9b3140726/task/0


#include<bits/stdc++.h>
using namespace std;
string a,b;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> a >> b;
	long long s = a.size();
	long long d = b.size();
	cout << abs(s - d);
} 
