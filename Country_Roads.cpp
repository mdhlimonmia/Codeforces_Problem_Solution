#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
int t = 1;
void solve(){
    int city,road;cin>>city>>road;
    vector<int>g[city];
    int dis[city][road];
    memset(dis,0, sizeof(dis));

    //input section
    int s,d,c;
    for(int i = 0; i<road; i++){
        cin>>s>>d>>c;
        if(dis[s][d] != 0){
            dis[s][d] = dis[d][s] = min(c, dis[s][d]);
        }else{
            g[s].push_back(d);
            g[d].push_back(s);
            dis[s][d] = dis[d][s] = c;
        }
    }
    int home; cin>>home;
    
    // for (int i = 0; i < city; i++)
    // {   cout<<i<<" : ";
    //     for(auto u:g[i])cout<<u<<" ";
    //     cout<<endl;
    // }
    

    vector<int>ans(city,-1);

    queue<int>q;
    q.push(home);

    ans[home] = 0;

    while(!q.empty()){
        int starting_city = q.front();
        // cout<<starting_city<<" : "<<g[starting_city].size()<<endl;
        q.pop();

        for(int i = 0; i<g[starting_city].size(); i++){
            int current_city = g[starting_city][i];
            int max_distance = max(ans[starting_city], dis[starting_city][current_city]);
            if(ans[current_city] != -1){
                ans[current_city] = min(ans[current_city], max_distance);
            }else{
                ans[current_city] = max_distance;
                q.push(current_city);
            }
        }   
    }
    cout<<"Case "<<t<<":"<<endl;
    for(int i = 0; i<city; i++){
        if(ans[i] == -1) cout<<"Impossible\n";
        else cout<<ans[i]<<endl;
    }

    t++;
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