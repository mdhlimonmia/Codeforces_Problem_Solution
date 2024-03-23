#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli k,x,a;cin>>k>>x>>a;
    // x--;
    lli t = (x*(x+1))/2;
    lli f = a-t;
    lli ans = (f-1)*k;
    if(ans>=a) cout<<"YES\n";
    else cout<<"NO\n";
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