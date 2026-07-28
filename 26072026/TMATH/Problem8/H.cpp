//https://oj.tmathcoding.vn/contest/9b3260726/task/7


#include<bits/stdc++.h>
using namespace std;
bool check(long long n) {
	for(long long i = 2; i * i <= n; i++) 
	if(n%i==0) return false;
	return n > 1;
}
bool uoc(long long n) {
	for(long long i = 1; i * i <= n; i++) {
		if(n%i == 0) {
			return true;
			if(n/i!=i) return true;
		}
		else return false;
	}
}
long long a[100005],n,s=0,d=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
		long long k = a[i];
		while(a[i]%2==0) a[i] = a[i] / 2;
		while(a[i]%3==0) a[i] = a[i] / 3;
		while(a[i]%5==0) a[i] = a[i] / 5;
		while(a[i]%7==0) a[i] = a[i] / 7;
		if(a[i] == 1) s = s + k;
	}
	cout << s;
} 
