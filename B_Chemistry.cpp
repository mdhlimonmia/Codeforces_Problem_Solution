#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    lli n,k;cin>>n>>k;
    string s; cin>>s;
    lli p = n-k;
    map<char,int>m;
    for(auto u:s)m[u]++;
    if(p == 1)cy;
    else{
        int t = 0;
        for(auto u:m){
            if(u.second>=2)t+=u.second - u.second%2;
        }
        if(t >= p || t == p-1)cy;
        else cn;
        // cout<<p<<" "<<t<<endl;
    }
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