#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    lli k,n;cin>>k>>n;
    pair<lli, lli>p[n];
    for (lli i = 0; i < n; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n);
    for(auto u:p){
        if(u.first>=k){
            cn;
            return;
        }else{
            k+=u.second;
        }
    }
    cy;
}

int main()
{
    Limon();

    solve();
    
}