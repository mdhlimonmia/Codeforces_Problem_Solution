#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int t = (n+1)/2;
    lli ans = 0;
    for (int i = 0; i < n-2; i++)
    {
        int tm = t;
        for (int j = i+1; j < n-1; j++)
        {
            int x = __gcd(v[i],v[j]);
            // cout<<x<<endl;
            ans += x*tm;
            tm--;
        }
        t--;
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