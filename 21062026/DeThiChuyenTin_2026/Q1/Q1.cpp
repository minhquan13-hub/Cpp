#include<bits/stdc++.h>
using namespace std;

long long f(long long n) { //khai bao f,n kieu ll
    if(n <= 0) return 0; // neu n < 0 thi ket thuc
    long long full = n / 70; //full=
    long long rem  = n % 70;
    long long cnt  = full * 7;
    
    /*
    if(rem >= 1) cnt++;   // d?m s? 1 (ho?c 71, 141,...)
if(rem >= 2) cnt++;   // d?m s? 2 (ho?c 72, 142,...)
if(rem >= 3) cnt++;   // d?m s? 3 (ho?c 73, 143,...)
if(rem >= 4) cnt++;   // d?m s? 4 (ho?c 74, 144,...)
if(rem >= 5) cnt++;   // d?m s? 5 (ho?c 75, 145,...)
if(rem >= 6) cnt++;   // d?m s? 6 (ho?c 76, 146,...)
// S? 70 (ho?c 140, 210,...) dã tính trong full*7 r?i
    */
    cnt += min(rem, 6LL);
    return cnt;
}

int main(){
    FILE* fin = fopen("C:\\Users\\Laptop VINHLINK\\Documents\\GitHub\\Cpp\\21062026\\DeThiChuyenTin_2026\\Q1\\DACBIET.INP", "r");
    if(fin == NULL) {
        cout << "KHONG TIM THAY FILE!" << endl;
        return 1;
    }
    fclose(fin);
    
    freopen("C:\\Users\\Laptop VINHLINK\\Documents\\GitHub\\Cpp\\21062026\\DeThiChuyenTin_2026\\Q1\\DACBIET.INP", "r", stdin);
    freopen("C:\\Users\\Laptop VINHLINK\\Documents\\GitHub\\Cpp\\21062026\\DeThiChuyenTin_2026\\Q1\\DACBIET.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        long long l, r;
        cin >> l >> r;
        cout << f(r) - f(l-1) << "\n";
    }
    return 0;
}
