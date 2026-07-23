//https://vi.wikibooks.org/wiki/B%C3%A0i_t%E1%BA%ADp_C%2B%2B_c%C3%B3_l%E1%BB%9Di_gi%E1%BA%A3i/M%E1%BA%A3ng_-_k%C3%BD_t%E1%BB%B1_-_chu%E1%BB%97i


#include<bits/stdc++.h>
using namespace std;
bool snt(long long n) {
	for(long long i = 2; i * i <= n; i++)
	if(n%i==0) return false;
	return n > 1;
}
bool scp(long long n){
	long long k = round(sqrt(n));
	if(k*k == n) return true;
	else return false;
}
long long a[1005],n;
int main() {
	cin >> n;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i];
		if(scp(a[i]) == true) cout << a[i] << " ";
	}
	for(long long i = 1; i <= n; i++) {
		if(snt(a[i]) == true) cout << a[i] << " ";
	}
}
