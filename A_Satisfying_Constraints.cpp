#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    int lw = 0, up = INT_MAX;
    map<int,int>m;
    int x,y;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        if(x == 1) lw = max(lw,y);
        else if( x == 2) up = min(up,y);
        else m[y]++;
    }
    int ans;
    ans = up - lw + 1;
    int lz = m.size();
    for(auto u:m){
        // cout<<u.first<<" "<<u.second<<endl;
        if(u.first >= lw && u.first <= up) ans--;
    }
    // cout<<lw<<" "<<up<<" "<<m.size();
    cout<<max(0,ans)<<endl;
}

int main()
{
    Limon();
    int _; cin>>_;
    while (_--)
    {
        solve();
    }
         
}