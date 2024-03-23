#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

vector<int>g[10001];
int parent[100001];
int visit[10000];

/*---Find the shortest path -----
7 9
1 2
1 3
3 5
2 5
4 1
5 1
5 6
6 7
3 7
*/
int shortest_path(int s, int d){
    if(visit[d] == -1) return -1;
    else{
        int ans = 0, x = parent[d];
        while (x != -1)
        {
            ans++;
            x = parent[x];
        }
        return ans;
    }
}

//---- bfs -----
void bfs(int root){
    memset(visit, -1, sizeof(visit));
    memset(parent, -1,sizeof(parent));

    queue<int>q;
    q.push(root);
    visit[root] = 1;
    parent[root] = -1;
    while (!q.empty())
    {
        int start = q.front();
        q.pop();
        for(auto u:g[start]){
            if(visit[u] == -1){
                q.push(u);
                visit[u] = 0;
                parent[u] = start;
            }
            else if(visit[u] == 0) visit[u] = 1;
        }
    }
}

void print_graph(int ver){
    cout<<"---- Graph with Adjacency node: \n";
    for(int i = 1; i<= ver; i++){
        cout<<i<<" :";
        for(auto u:g[i])cout<<u<<" ";
        cout<<endl;
    }
}

// Is it possible to visit the destination from the source.
void isVisit(int x, int y){
    bfs(x);
    if(visit[y] != -1)cout<<"Possible\n";
    else {
        cout<<"Impossible\n";
    }
}

int main()
{
    // Limon();
    
    int ver,eg; cin>>ver>>eg;
    int x,y;
    for (int i = 0; i < eg; i++)
    {
        cin>>x>>y;
        g[x].push_back(y);
        // g[y].push_back(x);
    } 
    
    int s,d; cin>>s>>d;
    bfs(s);
    cout<<shortest_path(s,d)<<endl;
}