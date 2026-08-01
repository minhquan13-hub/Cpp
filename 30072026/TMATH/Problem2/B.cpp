//https://oj.tmathcoding.vn/contest/9b3300726/task/1


#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> a >> b >> c;
    cout << (a%c+b%c)%c;
}
