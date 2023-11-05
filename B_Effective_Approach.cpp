#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int n;cin>>n;
    map<int,vector<int>>mp;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mp[arr[i]].push_back(i+1);
    }
    int m;cin>>m;
    lli x, va=0, py=0;
    for (int i = 0; i < m; i++)
    {
        cin>>x;
        int b = *mp[x].begin();
        int e = *--mp[x].end();
        va+=b;
        py+=(n-e+1);
    }
    // for(auto u:mp){
    //     for(auto v:u.second)cout<<v<<" ";
    //     cout<<endl;
    // }
    
    cout<<va<<" "<<py<<endl;
}