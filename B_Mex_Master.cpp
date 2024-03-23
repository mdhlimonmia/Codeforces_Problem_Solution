#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)cin>>v[i];
    int sum0 = 0;
    bool f = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i] == 0)sum0++;
        else if(v[i]>=2) f=1;
    }
    if(sum0<= (n+1)/2)cout<<"0\n";
    else if(f || sum0==n)cout<<"1\n";
    else cout<<"2\n";
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