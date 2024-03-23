#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    lli n,k,x;cin>>n>>k>>x;
    lli mn = (k*(k+1))/2, mx = ((n*(n+1)) - ((n-k)*(n-k+1)))/2;
    if(x<=mx && x>=mn)cy;
    else cn;
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