#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
int const mx = 1e5+123;
int n, k;
vector<int>v(mx), dp(mx,-1);
int solve(int x){
    if(x == 1)return 0;
    if(dp[x]!= -1) return dp[x];
    int t = INT_MAX;
    for(int i = 1; i<=k && x-i>=1; i++){
        t = min(t, abs(v[x]-v[x-i])+solve(x-i));
    }
    return dp[x] = t;
}

int main()
{
    Limon();

    cin>>n>>k;
    for(int i = 1; i<=n; i++)cin>>v[i];
    solve(n);
    cout<<dp[n]<<endl;
}