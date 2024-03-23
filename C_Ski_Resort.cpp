#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
void solve(){
    int n,k,q;cin>>n>>k>>q;
    int ans = 0, t = 0, x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(x<=q)t++;
        else{
            if(t>=k)ans += (t-k+1)*(t-k+2)/2;
            t = 0;
        }
    }
    if(t>=k)ans += (t-k+1)*(t-k+2)/2;
    cout<<ans<<endl;
    
}

int32_t main()
{
    Limon();

     int _;cin>>_;
     while (_--)
     {
       solve();
     }
}