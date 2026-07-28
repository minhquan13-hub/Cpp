//https://oj.tmathcoding.vn/contest/9b3260726/task/1


#include<bits/stdc++.h>
using namespace std;
bool check(long long n) {
	for(long long i = 2; i * i <= n; i++) 
	if(n%i==0) return false;
	return n > 1;
}
long long n,p;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	p = (n-1)/2;
	if(check(n) == true and check(p) == true) cout << "Yes";
	else cout << "No";
} 
