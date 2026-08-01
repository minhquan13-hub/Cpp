
#include<bits/stdc++.h>
using namespace std;
long long a,b,c,d;
int main() {
	cin >> a;
	if(a > 999 or a < 100) return 0;
	cout << a/100%10 << endl << a/10%10 << endl << a%10;
}
