#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
ll const mx = 1e5+123;
vector<ll>v(mx), dp(mx,-1);
ll n;

ll solve(ll x){
    if(x == 1)return 0;
    if(dp[x] != -1)return dp[x];
    ll p, q; p = q = LLONG_MAX;
    p = abs(v[x] - v[x-1]) + solve(x-1);
    if(x>=2) q = abs(v[x] - v[x-2]) + solve(x-2);
    return dp[x] = min(p,q);
}

int main()
{
    Limon();
    
    cin>>n;
    for(int i = 1; i<=n; i++)cin>>v[i];
    solve(n);
    cout<<dp[n]<<endl;
}