#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll const mx = 1e5+123;
ll mod = 1000000007;
vector<ll> adj[mx], adj1[mx], cost(mx);
stack<ll>st;
bool vis[mx];

void dfs(ll s){
    vis[s] = 1;
    for(auto u:adj[s]){
        if(vis[u]==0) dfs(u);
    }
    st.push(s);
}

ll x = LLONG_MAX, y = 1;
void dfs1(ll s){
    vis[s] = 1;
    if(x==cost[s])y++;
    else if(x>cost[s]){
        y = 1;
        x = cost[s];
    }
    for(auto u:adj1[s]){
        if(vis[u]==0)dfs1(u);
    }
}

int main()
{
    int n; cin >> n;

    for(int i=1; i<=n; i++)
    {
        cin >> cost[i];
    }
    int m; cin >> m;
    for(int i=0; i<m; i++)
    {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj1[b].push_back(a);
    }

    for(int i = 1; i<=n; i++){
        if(vis[i]==0){
            dfs(i);
        }
    }

    ll scc = 0, op = 1;
    memset(vis, 0, sizeof(vis));
    while (!st.empty())
    {
        ll s = st.top();
        st.pop();
        if(vis[s]==0){
            x = LLONG_MAX;
            y = 1;
            dfs1(s);
            scc+=x;
            op = (op*y)%mod;
        }
    }
    cout<<scc<<" "<<op<<endl;
}