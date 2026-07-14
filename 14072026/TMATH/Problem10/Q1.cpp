//https://oj.tmathcoding.vn/contest/9b3140726/task/9


#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n;
    long long x = 0;
    long long y = 0;
    long long z = 0; 
    cin >> n;
    string a;
    cin >> a;
    for (int i = 0; i < n; i++) {
        char lenh = a[i];
        if (lenh == 'G') {
        } 
        else if (lenh == 'R') {
            z =(z + 1) % 4;
        } 
        else if (lenh == 'L') {
            z =(z + 3) % 4;
        } 
        else if (lenh == 'B') {
            z =(z + 2) % 4;
        }
        if (z == 0) {
            y = y + 1;
        } 
        else if (z == 1) {
            x = x + 1;
        } 
        else if (z == 2) {
            y = y - 1; 
        } 
        else if (z == 3) {
            x = x - 1;
        }
    }
    cout << x << " " << y;
}
