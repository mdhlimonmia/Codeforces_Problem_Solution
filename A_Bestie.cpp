#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    int k;
    vector<int>v(n+1);
    for(int i = 1; i<=n; i++)cin>>v[i];
    k = v[1];
    for(int i = 2; i<=n; i++) k = __gcd(k,v[i]);
    if(k == 1) cout<<"0\n";
    else if(__gcd(k,n) == 1) cout<<1<<endl;
    else if(__gcd(k,n-1) == 1)cout<<2<<endl;
    else cout<<3<<endl;
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