#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n;cin>>n;
    map<lli,lli>m;
    for (lli i = 0; i * i <= n; i++) m[i*i]++;
    for (lli i = 0; i * i * i <= n; i++) m[i * i * i]++;
    
    cout<<m.size()-1<<endl;
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