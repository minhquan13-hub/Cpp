//https://oj.tmathcoding.vn/contest/9b3280626/task/2


#include<bits/stdc++.h>
using namespace std;
bool songuyento(long long n) {
	for(long long i = 2;i*i<=n;i++) 
		if(n%i==0) return false;
		return n > 1;
}
bool demuoc(long long n) {
	long long s = 0;
	for(long long i = 1;i<=n;i++)
	if(n%i==0) {
		s++;
		if(i!=n/i) s++;
	}
	return s;
}
long long tongchuso(long long n) {
	long long s = 0;
	while(n>0) {
		s = s + n%10;
		n = n / 10;
	}
	return s;
}
long long a[100005],n,s=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for(long long i = 1;i<=n;i++) {
		cin >> a[i];
		if(songuyento(tongchuso(a[i]))==true) s++;
	}
	cout << s;
}
