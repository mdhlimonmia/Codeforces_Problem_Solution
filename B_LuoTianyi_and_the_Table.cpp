#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,m;cin>>n>>m;
    int x = n*m;
    vector<int>v(x);
    for(int i = 0; i<x; i++)cin>>v[i];
    sort(v.begin(),v.end());
    int l1 = v[0], l2 = v[1], u1 = v[x-1], u2 = v[x-2];
    int f = min(n,m) - 1;
    lli ans = max(((u1-l1)*(x-f-1)+(u2-l1)*f), ((u1 - l1)*(x-f-1)+(u1-l2)*f));
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