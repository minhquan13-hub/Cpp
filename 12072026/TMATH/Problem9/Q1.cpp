//https://oj.tmathcoding.vn/contest/9b3120726/task/8


#include<bits/stdc++.h>
using namespace std;
bool check(long long n) {
	for(long long i = 2; i*i<=n; i++) 
	if(n%i==0) return false;
	return n > 1;
}
long long n;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    long long i = n;
    while(true) {
    	if(check(i) == true and i > n) {
    		cout << abs(n-i);
    		return 0;
		}
		i++;
	}
	cout << -1;
}

