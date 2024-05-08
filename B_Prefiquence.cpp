#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,m;cin>>n>>m;
    string a,b; cin>>a>>b;
    lli ans = 0;
    int i = 0;
    for(auto u:b){
        if(u == a[i]){
            ans++;
            i++;
        }
    }
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