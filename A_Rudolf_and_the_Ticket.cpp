#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,m,k;cin>>n>>m>>k;
    vector<int> v1(n), v2(m);
    for(int i = 0; i<n; i++)cin>>v1[i];
    for(int i = 0; i<m; i++)cin>>v2[i];

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(v1[i]+v2[j] <= k)ans++;
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