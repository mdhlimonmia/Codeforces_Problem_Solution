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
    vector<lli>a(n),b(n);
    for(auto &u:a)cin>>u;
    for(auto &u:b)cin>>u;
    lli m; cin>>m;
    vector<lli>d(m);
    for(auto &u:d)cin>>u;
    map<lli,lli>mp;
    bool f = 0;
    for(int i = 0; i<n; i++){
        if(a[i] != b[i]){
            mp[b[i]]++;
        }
        if(d[m-1] == b[i])f = 1;
    }
    if(f == 0) no;
    else{
        for(auto u:d) mp[u]--;
        for(auto u:mp){
            if(u.second>0){
                no;
                return;
            }
        }
        yes;
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