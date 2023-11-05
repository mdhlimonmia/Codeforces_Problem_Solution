#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    int n,x,y;cin>>n>>x>>y;
    int ans = n;
    while (x-- && ans/2 + 10 <n)
    {
        ans = ans/2 +10;
    } 
    if(ans<=y*10)cy;
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