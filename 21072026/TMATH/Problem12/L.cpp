//https://oj.tmathcoding.vn/contest/9b3210726/task/11


#include<bits/stdc++.h>
using namespace std;
long long a[103],n;
void in(long long a[], int n) {
	for(long long i = 1; i<= n ; i++) {
		cout << a[i] << " ";
	}
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(long long i = 1; i <= n; i++) {
		for(long long j = i + 1; j <= n; j++) {
			if(a[i] > a[j] and a[i]%2!=0 and a[j]%2!=0) {
				swap(a[i],a[j]);
			}
		}
	}
	in(a,n);
} 
