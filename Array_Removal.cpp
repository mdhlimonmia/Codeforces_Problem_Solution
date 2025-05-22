#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(auto &u:v)cin>>u;
    sort(v.begin(), v.end());
    int ans = 0, t = 0;
    for(int i = 0; i<n; i++){
        t |=v[i];
        if((t&(t+1)) == 0)ans = i+1;
    }
    cout<<n-ans<<endl;
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