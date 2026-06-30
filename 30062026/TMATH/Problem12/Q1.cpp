//https://oj.tmathcoding.vn/contest/9b3300626/task/11

#include<bits/stdc++.h>
using namespace std;
long long n;
int main() {
	cin >> n;
	vector<long long> uoc;
	for(long long i = 1; i<=sqrt(n); i++)  {
		if(n%i==0) {
			uoc.push_back(i);
			if(i!=n/i) 
				uoc.push_back(n/i);
		}
	}
	sort(uoc.begin(),uoc.end());
	cout << uoc.size() << "\n";
	for(long long i = 0; i<uoc.size(); i++) {
		cout << uoc[i] << " ";
	}
}

