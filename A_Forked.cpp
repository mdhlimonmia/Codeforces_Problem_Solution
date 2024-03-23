#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define lli long long int

int a,b;



void solve()
{
    int a,b,c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    pair<int,int>pos[] = {{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};
    set<pair<int,int>>king,quin;
    for (int i = 0; i < 8; i++)
    {
        king.insert({c+pos[i].first,d+pos[i].second});
        quin.insert({e+pos[i].first,f+pos[i].second});
        //cout<<king[i].first<<" "<<king[i].second<<endl;
    }
    int ans = 0;
   for(auto u:king){
    for(auto v:quin){
        if(u==v){
            ans++;
            break;
        }
    }
   }
   cout<<ans<<endl;
    
}

int main()
{
    Limon();

    int _;
    cin >> _;
    while (_--)
    {
        solve();
    }
}