#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,m;cin>>n>>m;
    vector<int>v(m);
    for(auto &u:v)cin>>u;
    lli ans = 0, mx = 0;
    for(auto u:v){
        ans += (u+u-1);
        if(u>mx)mx = u;
    }
    ans -=(mx+mx-1);
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