#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,k;cin>>n>>k;
    vector<int>v1(n), ans(n);
    vector<pair<int,int>>v2(n);
    for (int i = 0; i < n; i++){
        cin>>v2[i].first;
        v2[i].second = i;
    }
    for (int i = 0; i < n; i++) cin>>v1[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for (int i = 0; i < n; i++)
    {
        ans[v2[i].second] = v1[i];
    }
    for(auto u:ans)cout<<u<<" ";
    cout<<endl;
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