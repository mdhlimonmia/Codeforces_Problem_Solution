#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

     int n,m; cin>>n>>m;
     int x;
     pair<int, int>mp[n+1];
     for (int i = 1; i <= n; i++)
     {
        cin>>x;
        int t = (x/m);
        if(x%m !=0)t++;
        mp[i] = {t,i};
     }
     sort(mp,mp+n+1);
     cout<<mp[n].second<<endl;
     
}