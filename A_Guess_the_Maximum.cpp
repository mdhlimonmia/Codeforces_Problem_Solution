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
    vector<lli>v(n);
    for(auto &u:v)cin>>u;
    lli x = 0, ans = LLONG_MAX;
    for(int i = 0; i<n-1; i++){
        lli t = max(v[i],v[i+1]);
        if(t < ans)ans = t;
    }
    cout<<ans-1<<endl;

}

int main() {
    Limon();
    int _; cin >> _;
    for(int i = 1; i <= _; i++) {
        solve();
    }
    return 0;
}