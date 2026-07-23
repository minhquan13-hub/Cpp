//https://oj.tmathcoding.vn/contest/9b3210726/task/3


#include<bits/stdc++.h>
using namespace std;

void in(string a[], long long n) {
	for(long long i = 1; i<= n ; i++) {
		cout << a[i] << " ";
	}
}
bool so(string x) {
	for(char c : x)
		if(!isdigit(c)) return false;
		return true;
}
string a[103];
long long n;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (long long i = 1; i <= n - 1; i++) {
    for (long long j = i+1; j <= n; j++) {
    	if(so(a[i]) and so(a[j]))
        	if(stoll(a[i]) > stoll(a[j])) {
				swap(a[i],a[j]);
			}
		}
	}
	in(a,n);
}
