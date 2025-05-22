#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
ll const mx = 1e7;
ll k = 32768;
vector<ll>dp(mx,20);
void solve(ll t, ll c){
    // cout<<n<<" "<<c<<endl;
    if(t == 0 || c>15)return;
    // if(dp[n] != -1)return dp[n];
    dp[t] = min(dp[t], c);
    if(t%2 == 0){
        solve(t/2,c+1);
        solve(t-1,c+1);
    }
    else solve(t-1, c+1);
}

int main()
{
    // Limon();
    // memset(dp, 16, sizeof(dp));
    solve(k,0);
    // for(int i = 1; i<=t; i++)cout<<dp[i]<<" ";
    int _;cin>>_;
    ll n;
    while (_--)
    {
        cin>>n;
        // dp[n];
        cout<<dp[n]<<endl;
    }
}