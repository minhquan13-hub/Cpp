//https://oj.tmathcoding.vn/contest/9b3090726/task/9



#include<bits/stdc++.h>
using namespace std;
string s;
long long t;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        int dem[26] = {0};
        for (long long i = 0; i < n; i++) {
            cin >> s;
            for (long long j = 0; j < s.length(); j++) {
                dem[s[j] - 'a']++;
    		}
    	}
        long long loi = 0; 
        for (long long i = 0; i < 26; i++) {
            if (dem[i] % n != 0) {
                loi = 1;
            }
        }
        if (loi == 0) cout << "YES" << "\n";
		else cout << "NO" << "\n";
    }
    return 0;
}

