#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    int n;cin>>n;
    string s; cin>>s;
    int on = 0, ze = 0,tem=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='1')on++;
        else ze++;
    }
    if(on == n)cn;
    else cy;
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