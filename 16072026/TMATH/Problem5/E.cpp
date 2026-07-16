#include<bits/stdc++.h>
using namespace std;
long long snt(long long x) {
	long long s = 0;
	while(x>0) {
		s = s + x % 10;
		x = x / 10;
	}
	return s;
}
bool check(long long x) {
	for(long long i = 2 ; i*i<=x ; i++)
		if(x%i==0) return false ;
		return x > 1 ;
}
long long a;
long long s = 0;
int main() {
	cin >> a;
	for(long long i = 1; i <= a; i++) {
		if(check(i) == true and check(snt(i)) == true and i > 10) {
			cout << i << " ";
			s++;
	}
	
}
	if(s == 0) cout << 0;
}
