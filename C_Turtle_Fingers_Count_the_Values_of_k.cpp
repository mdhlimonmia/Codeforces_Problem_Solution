#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define rep(i,a,b) for (int i=a; i<b; ++i)
    
pair<int,int>rot(pair<int,int>p, int n){
    return { n-1-p.second,p.first};
} 
    
const ll mod = 1e9 + 7;
ll exp(ll x, ll y, ll p){
    ll res=1; x=x%p;
    while(y>0){
        if (y&1) res= (res*x)%p; y=y>>1; x=(x*x)%p;
    }
    return res;
}

void solve(){
    ll a,b,l;cin>>a>>b>>l;
    set<int>s;
    
    for(ll i = 1; i<=l; i*=a){
        for(ll j=1; j*i<=l; j*=b){
            if((l%(i*j))==0){
                //cout << i*j << endl;
                s.insert(l/(i*j));
            }
        }
    }

    cout << s.size() << endl;



}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t=1; cin>>t;
    while(t--)solve();
}