#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    vector<lli>v(n);
    lli m = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        m = max(v[i],m);
    }
    lli ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]>v[i-1]){
            ans++;
            ans = max(ans,v[i]-v[i-1]);
        }
    }
    ans = max(ans,m-1);
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