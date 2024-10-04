#include <bits/stdc++.h>
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
#define ll long long


void solve(){
    ll n;
    cin>>n;
    ll l = n, r = 2 * n, ans; 

    while (l <= r) {
        ll m = (l+r)>>1;
        ll t = (ll)(sqrtl(m)); 
        
        if (m-t>=n) {
            ans = m;
            r = m - 1; 
        } else {
            l = m+1;
        }
    }
    
   cout<<ans<<endl;
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