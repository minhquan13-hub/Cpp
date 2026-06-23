//https://oj.tmathcoding.vn/contest/9b3230626/task/2
#include<bits/stdc++.h>
using namespace std;
long long a[1000005],n,s=0,d=0;
int main() {
	cin >> n;
	long long i = 1;
	while(i<=n) {
		cin >> a[i];
		if(a[i]>0) s++;
		else if(a[i]<0) d++;
		i++;
	}
	cout << d << "\n" << s;
}
