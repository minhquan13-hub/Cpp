//https://laptrinhphothong.vn/problem/a03c000005




#include<bits/stdc++.h>
using namespace std;
long long n,m,s;
int main() {
	cin >> n >> m;
	while(n > 0) {
		s++;
		n = n + n / 10;
		if(n == m) {
			cout << s;
			return 0;
		}
	}
}
