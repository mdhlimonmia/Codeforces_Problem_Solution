#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i = 0; i<n; i++) cin>>v[i];
    // if(n%2 == 0){
    //     cout<<"NO\n";
    //     return;
    // }
    bool k = 1;
    for (int i = 0; i < n; i++)
    {
        if(v[i]<0){
            k = 0;
            break;
        }
        if(v[i] != 0 && i < n-2){
            int x,y;
            x = v[i];
            // y = abs(v[i+1] - v[i+2]);
            v[i+2] -= v[i];
            v[i+1] -= (v[i]*2);
            v[i] -= x;
        }
    }
    for(auto u:v){
        // cout<<u<<" ";
        if(u != 0){
            k = 0;
            break;
        }
    }
    if(k)cout<<"YES\n";
    else cout<<"NO\n";
    // for(auto u:v) cout<<u<<" ";

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