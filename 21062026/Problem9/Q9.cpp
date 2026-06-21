//https://oj.tmathcoding.vn/contest/9b3210626/task/7

#include<bits/stdc++.h>
using namespace std;
bool check(long long x) { // kiem tra so nguyen to
	for(long long i = 2; i*i<=x ;i++) // duyet vong for
		if(x%i==0) return false;
		return x > 1 ;
}
long long n,k;
int main() {
	ios_base::sync_with_stdio;
	cin.tie(0);cout.tie(0);
	cin >> n;
	
	long long k = n+1;	
	if(k<2) { // neu k<2 in ra -1 va ket thuc
		cout << -1;
		return 0;
	}


	while(true) { // duyet vong for tu n+1 den khi k hop le
		if(check(k)==true) { // kiem tra k co phai so nguyen to k
			cout << abs(k-n) << "\n"; // in ra gia tri tuyet doi cua k va n neu k la snt
			break; // dung vong lap khi k la snt
		}
		k++; // tang bien k neu k co so nguyen to phu hop
	}
	return 0; // ket thuc

}
