#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int m;cin>>m;
    int x;
    map<int,int, greater<int>>mp;
    for (int i = 0; i < m; i++)
    {
        cin>>x;
        for (int j = 0; j < n; j++)
        {
            if(x%arr[j] == 0)mp[x/arr[j]]++;
        }  
    }
    auto k = *mp.begin();
    cout<<k.second<<endl;
    
}