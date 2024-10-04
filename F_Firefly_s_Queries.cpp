#include <bits/stdc++.h>
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
#define ll long long

void solve(){
    ll n,q,l,r;
    cin>>n>>q;
    vector<ll>s(n+1);
    ll t = 0;
    for(ll i = 1; i<=n; i++){
        cin>>s[i];
        t+=s[i];
        s[i]+=s[i-1];
    }

    while (q--)
    {
        cin>>l>>r;
        ll sl,sr;
        if(r%n==0)sr = t*(r/n);
        else{
            ll k = r/n;
            sr = t*k;
            if(k+1+r%n<=n)sr +=(s[k+r%n]-s[k]);
            else{
                sr += s[n] - s[k];
                k = (k + r%n)-n;
                sr += s[k];
            }
           
        }
        l--;
        if(l%n==0)sl = t*(l/n);
        else{
            ll k = l/n;
            sl = t*k;
            if(k+1+l%n<=n)sl +=(s[k+l%n]-s[k]);
            else{
                sl += s[n] - s[k];
                k = (k + l%n)-n;
                sl += s[k];
            }
           
        }
        cout<<sr-sl<<endl;
    }
    
}
int main() {
    // Limon();
    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }

    return 0;
}