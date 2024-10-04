#include <bits/stdc++.h>
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
#define ll long long

void solve(){
    ll n,m,q;
    cin>>n>>m>>q;
    vector<ll>v(m);
    for(auto &u:v)cin>>u;
    sort(v.begin(), v.end());
    while (q--)
    {
        ll p; cin>>p;
        ll ans = n+1;
        if(v[0]>p) ans = v[0]-1;
        if(v[m-1]<p){
            if(ans != n+1) ans = max(ans, n - v[m-1]);
            else ans = n - v[m-1];
        }
        else if(v[0]<p && v[m-1]>p){
            // cout<<ans<<endl;
            ll l = 0,r = m-1, x,y;
            while (l<=r)
            {
                ll mid = (l+r)/2;
                // cout<<mid<<" ";
                if(v[mid]>=p){
                    x = mid;
                    r = mid-1;
                }else{
                    y = mid;
                    l = mid+1;
                }
            } 
            // cout<<l<<" "<<y<<endl;
            ans = (abs(v[x]-v[y] ))/2;
        
        }
        cout<<ans<<endl;
        
    }
    
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