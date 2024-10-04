#include <bits/stdc++.h>
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
#define ll long long


int const mx = 2e5+123;
int n;
vector<int>g[mx], par(mx);
bool vis[mx];
int main() {
    // Write C++ code here
    cin>>n;
    int v,u;
    for(int i = 1; i<n; i++){
        cin>>v>>u;
        g[v].push_back(u);
        g[u].push_back(v);
    }
    vector<int>tem(n);
    for(auto &u:tem)cin>>u;
    //bfs
    queue<int>q;
    q.push(1);
    vector<int>v1,v2;
    int i = 1;
    bool f = 1;
    vis[1] = 1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(auto u:g[x]){
            if(!vis[u]){
                q.push(u);
                vis[u] = 1;
                par[u] = x;
            }
        }
    }
    // memset(vis,0,sizeof(vis));
    // for(int i = 1; i<=n; i++)cout<<i<<" "<<par[i]<<endl;
    if(tem[0] != 1){
        cout<<"No\n";
        return 0;
    }
    queue<int>qu;
    qu.push(1);
    for(int i = 1; i<n; i++){
        if(qu.front() != par[tem[i]]){
            while(!qu.empty() && qu.front() != par[tem[i]]) qu.pop();
            if(qu.empty() || qu.front() != par[tem[i]]){
                cout<<"No\n";
                return 0;
            }
        }
        qu.push(tem[i]);
    }
    cout<<"Yes\n";
    return 0;
}