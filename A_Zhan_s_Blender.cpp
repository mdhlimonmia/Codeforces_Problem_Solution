#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
void solve(){
    ll n;cin>>n;
    ll x,y; cin>>x>>y;
    ll t = min(x,y);
    ll ans = ceil(n/(t*1.0));
    cout<<ans<<endl;
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