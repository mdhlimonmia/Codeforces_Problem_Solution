#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    string a,b; cin>>a>>b;
    bool  f = false;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] == b[i] && a[i] == '0' && a[i+1] == b[i+1] && a[i+1] == '1'){
             f = true;
             break;
        }
    }
    if(f)cy;
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