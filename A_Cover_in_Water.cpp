#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    string s; cin>>s;
    int ans = 0, ct = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '.') {
            ans++;
            ct++;
        }
        else{
            if(ct == 3)break;
            ct = 0;
        }
        if(ct == 3)break;
    }
    if(ct == 3)cout<<2<<endl;
    else cout<<ans<<endl;
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