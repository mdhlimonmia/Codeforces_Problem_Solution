#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,k;cin>>n>>k;
    vector<lli>v(n+1), sum(n+1);
    for (int i = 1; i <= n; i++)cin>>v[i];
    for(int i = 1; i<=n; i++) sum[i] = sum[i-1] + v[i];
    map<lli,lli>m;
    m[0] = 1;
    lli ans = 0;
    for (int i = 1; i <= n; i++)
    {  
        lli x = sum[i] - k;
        ans += m[x];
        m[sum[i]]++;
    }
    cout<<ans<<endl;
}

int main()
{
    Limon();

    solve();
}