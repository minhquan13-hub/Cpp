//https://oj.tmathcoding.vn/contest/9b3210726/task/1


#include<bits/stdc++.h>
using namespace std;
long long a[1003],n;

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
	for (int i = n; i >= 2; i--) {
    	for (int j = 1; j < i; j++){
        	if ( a[j] > a[j + 1] ) {
				swap(a[j],a[j+1]);
				in(a,n);
				cout << "\n";
			}
		}
	}
}
