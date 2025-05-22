#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
int const mx = 1e5+123;
int v[mx][4];
int dp[mx][4];
int n;
int solve(int k, int i){
    if(k == 0)return 0;
    if(dp[k][i]!=-1)return dp[k][i];
    int t = 0;
    for(int j = 1; j<=3; j++){
        if(j!=i){
            t = max(t,v[k][j]+solve(k-1,j));
        }
    }
    return dp[k][i] = t;
}

int main()
{
    Limon();

    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=3; j++){
            cin>>v[i][j];
        }
    }
    memset(dp,-1,sizeof(dp));
    cout<<solve(n, 0)<<endl;
    // cout<<dp[n][-1]<<endl;
}