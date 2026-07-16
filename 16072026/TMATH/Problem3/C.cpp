#include<bits/stdc++.h>
using namespace std;
long long uocchung(long long a,long long b) {
	long long s = 0;
	if(a>=b) {
		for(long long i = 1; i <= sqrt(a); i++)
			if(a%i==0 and b%i==0) s++;
			return s;
	}
	else if(b>=a) {
		for(long long i = 1; i <= sqrt(b); i++)
			if(a%i==0 and b%i==0) s++;
			return s;
	}
}
long long a,b;
int main() {
	cin >> a >> b;
	cout << uocchung(a,b);
}
