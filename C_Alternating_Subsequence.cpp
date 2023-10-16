#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    int n;cin>>n;
    vector<lli>v(n),v1;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];

    }
    v1.push_back(v[0]);
    for (int i = 1; i < n; i++)
    {
        lli x = v1.back();
        if((x<0 && v[i]<0) || (x> 0 && v[i]>0) ) // if positive-positive or negative-negative  
        {                                          // get which element that is maximum;
            v1.pop_back();
            v1.push_back(max(x,v[i]));
        }
        else v1.push_back(v[i]);  // positive-negative or negative-positive then get the element
    }
    lli sum = 0;
    for(auto u:v1)sum+=u;

    cout<<sum<<endl;
    
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