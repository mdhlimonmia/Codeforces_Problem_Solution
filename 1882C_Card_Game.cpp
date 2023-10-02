#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n;cin>>n;
    vector<lli>v(n);
    lli  sum = 0, t = 0;
    for (lli i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    v.push_back(0);
    for (lli i = 2; i < n; i++)
    {
        sum += max(t,v[i]);
    }
    sum += max({t,v[0],v[0]+v[1]});
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