////https://oj.tmathcoding.vn/contest/9b3020826/task/4



#include<bits/stdc++.h>
using namespace std;
string s;
long long dem[1000006];
int main ()
{
	getline(cin,s);
	long long k = s.size();
	for(char i = '0';i<='9';i++)
	{
		long long dem = 0;
		for(char c : s) {
			if(c == i) dem++;
		}
		cout << dem << " ";
	}
}
