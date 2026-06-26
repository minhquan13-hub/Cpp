//https://laptrinhphothong.vn/problem/a04a000007
#include<bits/stdc++.h>
using namespace std;
long long a[105],n,s=0;
int main() {
	cin >> n;
	for(long long i = 1;i <= n;i++) {
		cin >> a[i];
		if(a[i]%3==2) s = s + a[i];
	}
	cout << s;
}
