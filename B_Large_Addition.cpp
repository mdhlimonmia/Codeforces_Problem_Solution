#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double
#define dbg(args...) do {cerr << #args << ": "; faltu(args); } while(0)
void faltu() { cerr << endl; }
template <typename T, typename ...hello> void faltu(T arg, const hello&... rest) { cerr << arg << ' '; faltu(rest...); }
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl


#define lzero(x) __builtin_clzll(x)


void solve() {
    lli n, t; cin >> n;
    t = n;
    // dbg(n);
    while(t>0){
        if(t == 10 || t == 11 || t == 12 || t == 13 || t == 14 || t == 15 || t == 16 || t == 17 || t == 18){
            yes;
            return;
        }else if(t%10 == 9){
            no;
            return;
        }
        else{
            t/=10;
            t--;
        }
        // dbg(t,k);
    }
    no;
}

int main() {
    // Limon();
    int _; cin >> _;
    for(int i = 1; i <= _; i++) {
        solve();
    }
    return 0;
}