#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n,c;cin>>n>>c;
    map<int, int>mp;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        mp[x]++;
    }
    int count = 0;
    for(auto u:mp){
        if(u.second<c)count+=u.second;
        else count +=c;
    }
    cout<<count<<endl;
    
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