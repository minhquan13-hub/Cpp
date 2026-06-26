//https://laptrinhphothong.vn/problem/a09d000001


#include<bits/stdc++.h>
using namespace std;
long long a,n,s=1;
int main() {
	cin >> a >> n;
	for(long long i = 1;i<=n;i++) {
		s = s * a;
	}
	cout << s % (1000000+7);
}
