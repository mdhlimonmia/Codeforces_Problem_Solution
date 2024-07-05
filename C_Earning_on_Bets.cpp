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
    lli x;
    vector<lli>v(n),ans(n);
    for(auto &u:v)cin>>u;
    x = v[0];
    for(auto u:v) x =(x*u)/(__gcd(x,u));
    lli tem = 0;
    for(int i = 0; i<n; i++){
       ans[i] = (x/v[i]);
        tem +=ans[i];
    }
    if(tem>=x) cout<<"-1\n";
    else{
        for(auto u:ans)cout<<u<<" ";
        cout<<endl;
    }
}

int main() {
    Limon();
    int _; cin >> _;
    for(int i = 1; i <= _; i++) {
        solve();
    }
    return 0;
}