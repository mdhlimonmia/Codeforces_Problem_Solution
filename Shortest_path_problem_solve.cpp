#include <bits/stdc++.h>
using namespace std;
vector<int> v[10005];
bool vis[10004];
int parent[10004];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                parent[child] = par;
            }
        }
    }
}
int shortdis(int src, int des)
{
    if (vis[src] == false || vis[des] == false)
        return -1;
    int distance = 0;
    while (des != -1)
    {
        des = parent[des];
        distance++;
    }
    return distance - 1;
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int src, des;
        cin >> src >> des;
        memset(vis, false, sizeof(vis));
        memset(parent, -1, sizeof(parent));
        bfs(src);
        cout << shortdis(src, des) << endl;
    }
    return 0;
}