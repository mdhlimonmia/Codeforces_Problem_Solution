#include <bits/stdc++.h>
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    ll x = LLONG_MAX;
    ll l = k, r = k+n-1, p,q;
    q = (k*(k-1))/2;
    p = (r*(r+1))/2 - q;
    // cout<<p<<" pq "<<q<<endl;
    while (l<=r)
    {
        ll m = (l+r)/2;
        long long t = p - ((m*(m+1))/2 - q)*2 ;
        // cout<<l<<" "<<r<<" "<<m<<"  "<<t<<endl;
        x = min(abs(t),x);
        if(t>0){
            l = m+1;
        }else r = m-1;
    }
    cout<<x<<endl;
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