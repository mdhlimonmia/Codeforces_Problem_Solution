#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    vector<int>v1,v2;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(i%2 == 0)v1.push_back(x);
        else v2.push_back(x);
    }
    bool t = 1;
    for(auto u:v1){
        if((u+v1[0])%2 != 0)t = 0;
        // cout<<u<<" ";
    }
    for(auto u:v2){
        if((u+v2[0])%2 != 0)t = 0;
        // cout<<u<<" ";
    }
    if(t)cout<<"YES\n";
    else cout<<"NO\n";
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