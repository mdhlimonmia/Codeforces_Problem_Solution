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
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0; i<n; i++)cin>>v[i];
    int k = 0, t = 0,i;
    vector<pair<int,int>>p;
    for(i = 1; i<n; i++){
        if(v[i-1]>v[i]){
            k++;
            p.push_back({t,i-1});
            t = i;
        }
        if(k>2)break;
    }
    p.push_back({t,i-1});
    // dbg(k);
    // for(auto [u,v]:p)cout<<u<<" "<<v<<endl;
    if(k==0)yes;
    else if(k==1 && v[p[0].first]>=v[p[1].second] && v[p[0].second]>=v[p[1].second])yes;
    else no;
}

int main() {
    // Limon();
    int _; cin >> _;
    for(int i = 1; i <= _; i++) {
        solve();
    }
    return 0;
}