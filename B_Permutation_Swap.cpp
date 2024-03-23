#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    map<int, int>m;
    int x;
    for (int i = 1; i <= n; i++)
    {
        cin>>x;
        m[abs(i-x)]++;
    }
    int ans = 0;
    for (auto u:m)
    {
       ans = __gcd(ans, u.first);
    }
    cout<<ans<<endl;
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