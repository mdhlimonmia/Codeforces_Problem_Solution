#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n,m;cin>>n>>m;
    vector<int>arr(m),arr1(m),ans;
    map<int,int>mp;
    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    arr1 = arr;
    sort(arr1.begin(),arr1.end());
    int u = unique(arr1.begin(),arr1.end())-arr1.begin();
    int k=(n-u);cout<<u<<endl;
    for(int i = 0; i<k; i++)ans.push_back(-1);
    for (int i = 0; i<m; i++)
    {
        if(mp[arr[i]]>0){
            ans.push_back(i+1);
            mp[arr[i]] = 0;
        }
    }
    sort(ans.rbegin(),ans.rend()-k);
    for(auto u:ans)cout<<u<<" ";
    cout<<endl;
}

int main()
{
    Limon();

    // int _;cin>>_;
    // while (_--)
    // {
	   solve();
    // }
    
}