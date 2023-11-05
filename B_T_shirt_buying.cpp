#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    int p[n],a[n],b[n];
    for(int i = 0; i<n; i++)cin>>p[i];
    for(int i = 0; i<n; i++)cin>>a[i];
    for(int i = 0; i<n; i++)cin>>b[i];
    
    priority_queue<int, vector<int>,greater<int>>q[5][5];
    for (int i = 0; i < n; i++)
    {
        q[a[i]][b[i]].push(p[i]);
    }
    int m; cin>>m;
    while (m--)
    {
        int x,f,l; cin>>x;
        int mx = INT32_MAX;
        for(int i = 1; i<=3; i++){
            if(!q[x][i].empty() && q[x][i].top()<mx){
                mx = q[x][i].top();
                f = x; l = i;
            }
            if(!q[i][x].empty() && q[i][x].top()<mx){
                mx = q[i][x].top();
                f = i; l = x;
            }
        }
        if(mx == INT32_MAX)cout<<"-1 ";
        else{
            cout<<mx<<" ";
            q[f][l].pop();
        }
    }
    cout<<endl;
}

int main()
{
    Limon();
    
    solve();
  
}