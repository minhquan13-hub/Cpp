#include<bits/stdc++.h>
using namespace std;
long long t,l,r,s=0;
int main()
{
	freopen("SODACBIET.INP", "r", stdin);
    freopen("SODACBIET.OUT", "w", stdout);
	cin >> t;
	while(t--) {
		cin >> l >> r;
		for(long long i = l; i <= r;i++) {
			if(i%10 == i%7) s++;
		}
		cout << s << endl;
		s = 0;
	}
}
