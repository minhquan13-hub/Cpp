//https://oj.tmathcoding.vn/contest/9b3210626/task/9

#include<bits/stdc++.h>
using namespace std;
bool check(long long x) {
	for(long long i = 2;i*i<=x;i++)
	if(x%i==0) return false ;
	return x > 1;
}
long long a[1000005] ,n , s = 0;
int main(){
	cin >> n;
	for(long long i = 1;i<=n;i++) { //duyet tu i den n
		cin >> a[i]; // nhap vao a[i]
		if(check(a[i])==true) s++; //neu a[i] la so nguyen to thi s + 1
	}
	cout << s;
	return 0;
}
