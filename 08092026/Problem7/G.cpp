//https://oj.tmathcoding.vn/contest/9b3090826/task/6


#include<bits/stdc++.h>
using namespace std;
long long s,k,d;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin >> s;
	while(true) {
		if(s == 0) break;
		if(s >= 500) {
			while(s >= 500) {
				s = s - 500;
				d++;
			}
		}
		if(s >= 200) {
			while(s >= 200) {
				s = s - 200;
				d++;
			}
		}
		if(s >= 100) {
			while(s >= 100) {
				s = s - 100;
				d++;
			}
		}
		if(s >= 50) {
			while(s >= 50) {
				s = s - 50;
				d++;
			}
		}
		if(s >= 20) {
			while(s >= 20) {
				s = s - 20;
				d++;
			}
		}
		if(s >= 10) {
			while(s >= 10) {
				s = s - 10;
				d++;
			}
		}
		if(s >= 5) {
			while(s >= 5) {
				s = s - 5;
				d++;
			}
		}
		if(s >= 2) {
			while(s >= 2) {
				s = s - 2;
				d++;
			}
		}
		if(s >= 1) {
			while(s >= 1) {
				s = s - 1;
				d++;
			}
		}
	}
	cout << d;
}
