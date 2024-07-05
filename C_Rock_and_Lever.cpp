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
    lli n; cin >> n;
    vector<lli>ans(64), v(n);
    for(lli i = 0; i<n; i++){
        cin>>v[i];
        lli k = __builtin_clzll(v[i]); // Number of leading Zero.
        // cout<<k<<endl;
        ans[k]++;
    }
    lli p = 0;
    // for(auto u:ans)cout<<u<<" ";
    // cout<<endl;
    for(auto u:ans){
        p += (u*(u-1))/2;
    }
    cout<<p<<endl;
}

int main() {
    // Limon();
    int _; cin >> _;
    for(int i = 1; i <= _; i++) {
        solve();
    }
    return 0;
}