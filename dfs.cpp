#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
vector<int>g[10000];
bool vis[10000];
bool cycle_track[10000];
stack<int>topological_sort;

//Declaration part.
void tp_sortTo(int root);
void tp_sort(int ver);
bool checkCycle_un(int);
bool isCycle_un(int);
bool checkCycle(int root);
bool isCycle(int ver);
void print_graph(int ver);


void dfs(int root){
    stack<int>s;
    s.push(root);
    vis[root] = true;
    while (!s.empty())
    {
        int start = s.top();
        s.pop();
        for(auto u:g[start]){
            if(!vis[u]){
                vis[u] = true;
                s.push(u);
            }
        }
    } 
}


//Topological Sort
void tp_sortTo(int root){
    vis[root] = true;
    for(auto u:g[root]){
        if(!vis[u])tp_sortTo(u);
    }
    topological_sort.push(root);
}

void tp_sort(int ver){
    memset(vis, false, sizeof(vis));
    memset(cycle_track, false, sizeof(cycle_track));
    cout<<"Topological Sort: \n";
    if(isCycle(ver))cout<<"Is not possible\n";
    else{
        /*
        6 6
        6 3
        6 1
        3 4
        4 2
        5 1
        5 2
        */
        memset(vis, false, sizeof(vis));
        for (int i = 1; i <= ver; i++)
        {
            if(!vis[i])tp_sortTo(i);
        }
        
        while (!topological_sort.empty())
        {
            cout<<topological_sort.top()<<" ";
            topological_sort.pop();
        }
        cout<<endl;
    }
}

 //Detect Cycle in an Undirected Graph
bool checkCycle_un(int root, int parent){
    vis[root] = true;
    for(auto u: g[root]){
        if(!vis[u]){
            if(checkCycle_un(u,root))return true;
        }
        else if(u != parent) return true;
    }
    return false;
}
bool isCycle_un(int ver){
    for(int i = 1; i<=ver; i++){
        if(!vis[i]){
            if(checkCycle_un(i,-1))return true;
        }
    }
    return false;
}

//Detect Cycle in a Directed Graph
bool checkCycle(int root){
    vis[root] = true;
    cycle_track[root] = true;
    for(auto u: g[root]){
        if(!vis[u]){
            if(checkCycle(u))return true;
        }
        else if(cycle_track[u]) return true;
    }
    cycle_track[root] = false;
    return false;
}
bool isCycle(int ver){
    for(int i = 1; i<=ver; i++){
        if(!vis[i]){
            if(checkCycle(i))return true;
        }
    }
    return false;
}


void print_graph(int ver){
    for (int i = 0; i <= ver; i++)
    {   
        cout<<i<<" :";
        for(auto u:g[i])cout<<u<<" ";
        cout<<endl;
    }
}

//Input Section
int ver,eg,x,y;
void Directed(){
    cin>>ver>>eg;
    while (eg--)
    {
        cin>>x>>y;
        g[x].push_back(y);
    }
}
void UnDirected(){
    cin>>ver>>eg;
    while (eg--)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
}
int main()
{
    //Limon();
    memset(vis, false, sizeof(vis));
    memset(cycle_track, false, sizeof(cycle_track));

    int op;
    cout<<"1.Directed\t 2.Undirected."; cin>>op;
    if(op == 1)Directed();
    else UnDirected();
    
    //---------Operation Section----------
    int choice;
    cout<<"What are you want to do:\n\t1.Print graph With Adjacency node.\n\t2.Topological Sort.\n\t3.Check Cycle";cin>>choice;
    switch (choice)
    {
    case 1:{
        print_graph(ver);
        break;
    }
    case 2:{
        tp_sort(ver);
        break;
    }
    case 3:{
        if(op == 1){
            if(isCycle(ver))cout<<"Yes\n";
            else cout<<"No\n";
        }
        else{
            if(isCycle_un(ver))cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
    default:
        break;
    }
    //print_graph(ver);

    // if(isCycle(ver))cout<<"Yes\n";
    // else cout<<"No\n";

    //dfs(ver);
    
}