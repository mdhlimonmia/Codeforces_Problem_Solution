#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
void solve(){
    ll n;cin>>n;
    vector<ll>v(n);
    for(auto &u:v)cin>>u;
    ll ans = v[n-2];
    for(ll i = n-3; i>=0; i--){
        ans -=v[i];
    }
    cout<<v[n-1]-ans<<endl;
}

int main()
{
    Limon();

    int _;cin>>_;
    while (_--)
    {
        solve();
    }
}