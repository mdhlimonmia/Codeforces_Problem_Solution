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

void solve() {
    int n,m; cin >> n>>m;
    // lli k = (n+m);
    // cout<<(k|(k-1)|(k+1))<<endl;
    lli ans = n;
    for(int i = n+m; i>= max(0, n-m); i--) {
        ans |= i;
        if(i & (i-1) == 0 || (i & (i+1) == 0))i >>=1;
    }
    cout<<ans<<endl;
}

int main() {
    Limon();
    int _; cin >> _;
    for(int i = 1; i <= _; i++) {
        solve();
    }
    return 0;
}