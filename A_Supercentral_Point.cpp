#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

     int n;cin>>n;
     int x,y;
     pair<int, int>p[n];
     for (int i = 0; i < n; i++)
     {
        cin>>x>>y;
        p[i] = {x,y};
     }
     
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        bool a,b,c,d;
        a = b = c = d = 0;
        for (int j = 0; j < n; j++)
        {
            if(i !=j){
                if(p[i].first == p[j].first && p[i].second>p[j].second)a = 1;
                if(p[i].first == p[j].first && p[i].second<p[j].second) b = 1;
                if(p[i].second == p[j].second && p[i].first > p[j].first) c = 1;
                if(p[i].second == p[j].second && p[i].first < p[j].first) d = 1;
            }
        }
        if(a && b && c && d)ans++;
        
    }
    
     cout<<ans<<endl;
}