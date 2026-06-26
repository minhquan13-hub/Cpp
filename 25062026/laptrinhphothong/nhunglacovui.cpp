//	https://laptrinhphothong.vn/problem/a01c000006
#include<bits/stdc++.h>
using namespace std;
long long n,s=0,d=0;
int main() {
	cin >> n;
	for(long long i = 1;i <= n;i++) {
		if(i%3==0) s++;
		else d++;
	}
	cout << s << "\n" << d;
}
