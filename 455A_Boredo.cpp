#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    map<int,int>m;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        m[v[i]]++;
    }
    pair<int,int>p[n];
    p[0].first = m[v[0]];
    p[0].second = v[0];
    int x = 1;
    sort(v.begin(),v.end());
    for (int i = 1; i < n; i++)
    {
        if(v[i] != v[i-1]){
            p[x].first=m[v[i]];
            p[x].second=v[i];
            // cout<<v[i]<<" "<<x<<endl;
            x++;
        }
    }
    sort(p,p+x);
    int sum = 0;
    for (int i = x-1; i >= 0; i--)
    {
        // cout<<p[i].first<<" "<<p[i].second<<endl;
        lli sm = p[i].second * m[p[i].second];
        if(sm>0){
            sum +=sm;
            m[p[i].second - 1] = 0;
            m[p[i].second + 1] = 0;
        }
    }
    
    cout<<sum<<endl;
}

int main()
{
    Limon();

   
	   solve();
    
}