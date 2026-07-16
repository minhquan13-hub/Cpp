#include<bits/stdc++.h>
using namespace std;
string s;
long long dem[1000006];
int main ()
{
	getline(cin,s);
	for(long long i = 0;i<=s.size();i++)
	{
		if(s[i] >= 'a' and s[i] <= 'z') dem[s[i]]++;
		if(s[i] >= 'A' and s[i] <= 'Z') {
			s[i] = s[i] + 32;
			dem[s[i]]++;
		}
	}
	for(long long i = 0;i<=s.size();i++)
	{
		if(dem[s[i]]>0)
		{
			cout<<s[i]<<" "<<dem[s[i]]<<"\n";
			dem[s[i]]=0;
		}
	}
}
