#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
void solve(){
    int n,m; cin>>n>>m;
    string s,t,q; cin>>s>>t;
    for (int i = 0; i < n; i++)
    {
        q+=s[i];
        if(s[i] == s[i+1]) q+=t;
    }
    int sz = q.size(),k = 1;
    for(int i = 0; i<sz; i++){
        if(q[i] == q[i-1]){
            k=0;
            break;
        }
    }
    if(k)cy;
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