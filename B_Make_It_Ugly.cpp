#include <bits/stdc++.h>
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &u:v)cin>>u;
    map<ll,ll>m;
    ll mx = 0, t;
    for(int i = 0; i<n; i++){
        m[v[i]]++;
        if(m[v[i]]>mx){
            mx = m[v[i]];
            t = v[i];
        }
    }
    if(m.size()==1) cout<<-1<<endl;
    else if(mx<(n/2 + 1)) cout<<0<<endl;
    else{
        bool k = 0;
        ll x = n,y=-1,p = -1, z = n;
        for(ll i = 0; i<n; i++){
            if(v[i]!= t){
                x = min(x,i);
                y = max(y,i);
                if(p == -1) p = i;
                else{
                    z = min(i - p - 1,z);
                    p = i;
                }
            }
            if(i!=n-1 && v[i]!=t && v[i+1]!=t){
                k = 1;
                break;
            }
        }
        if(k)cout<<0<<endl;
        else cout<<min({z,x,n-y-1})<<endl;
        
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