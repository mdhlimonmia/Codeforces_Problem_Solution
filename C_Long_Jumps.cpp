#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
int n;
int const mx = 2e5+123;
vector<int>v(mx);
int dp[mx];

int process(int i){
    if(i > n)return 0;
    if(dp[i]!=-1)return dp[i];
    int k = v[i]+process(i+v[i]);
    return dp[i] = k;
}

void solve(){
    cin>>n;
    for(int i = 1; i<=n; i++)cin>>v[i];
    memset(dp,-1,sizeof(dp));
    int ans = 0;
    for(int i = 1; i<=n; i++){
        ans = max(ans,process(i));
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