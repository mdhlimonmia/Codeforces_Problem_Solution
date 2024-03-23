#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,m,k;cin>>n>>m>>k;
    int t = k/2;
    vector<int>v1(n),v2(m);
    for (int i = 0; i < n; i++)
    {
        cin>>v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int x = 0,y=0;
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        if(v1[i]>k)break;
        if(i!=0 && v1[i] == v1[i-1]) continue;
        x++;
        mp[v1[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        if(v2[i]>k || y>=t)break;
        if(i!=0 && v2[i] == v2[i-1]) continue;
        if(mp[v2[i]]>0){
            if(x>t){
                x--;
                y++;
            }
            continue;
        }
        if(v2[i]<=k)y++;
    }
    if(x>=t && y>= t)cout<<"YES\n";
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