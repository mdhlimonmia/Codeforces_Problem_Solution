#include <bits/stdc++.h>
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
#define ll long long

ll calLan(ll a, ll b, ll c, ll d){
    ll x = 1ll*(a-c)*(a-c) + 1ll*(b-d)*(b-d);
    return x;
}

void solve(){
    ll n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }
    pair<int,int>p[3];
    cin>>p[0].first>>p[0].second>>p[1].first>>p[1].second;
    ll l = calLan(p[0].first, p[0].second, p[1].first, p[1].second);
    for(auto u:v){
        ll x = calLan(p[1].first, p[1].second, u.first, u.second);
        if(x<=l){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main() {
    Limon();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}