#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,m,x;cin>>n>>m>>x;
    vector<set<int>>v(m+1);
    v[0].insert(x);
    for (int i = 0; i < m; i++)
    {
      int d; cin>>d;
      char c; cin>>c;
      if(c == '?'){
        for(auto u:v[i]){
          int cw = u+d;
          if(cw>n) cw = cw-n;
          int acw = u-d;
          if(acw<1) acw = n + acw;
          
          v[i+1].insert(cw);
          v[i+1].insert(acw);
        }
      }
      else if(c == '0'){
        for(auto u:v[i]){
          int cw = u+d;
          if(cw>n) cw = cw-n;
          v[i+1].insert(cw);
        }
      }
      else{
        for(auto u:v[i]){
          int acw = u-d;
          if(acw<1) acw = n + acw;
          v[i+1].insert(acw);
        }
      }
    }
   
    cout<<v[m].size()<<endl;
    for(auto u:v[m]) cout<<u<<" ";
    cout<<endl;
    
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