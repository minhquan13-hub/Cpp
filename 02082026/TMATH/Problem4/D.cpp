//https://oj.tmathcoding.vn/contest/9b3020826/task/3


#include<bits/stdc++.h>
using namespace std;
long long n,d=0;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> n;
	if(n%2 == 1) cout << "NA";
	else cout << (n%10)/2;
}
