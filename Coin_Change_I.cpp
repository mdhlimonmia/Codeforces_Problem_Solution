#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mpi map<int,int>
#define mpl map<long long, long long>
#define inf 1e18

typedef long long ll;
typedef double dd;
int dx[] = {1,-1,0,0,1,-1,-1,1};
int dy[] = {0,0,1,-1,1,-1,1,-1};
int n,k;
vector<int>c(60),r(60);
ll dp[60][1123];
int mod = 100000007;

ll solve(int i, int t){
    if(t==0 || i==n)return(t==0);
    if(dp[i][t] != -1) return dp[i][t];
    ll ret = 0;
    for(int j = 0; j<=r[i] && j*c[i]<=t; j++) ret += solve(i+1, t - j*c[i])%mod;
    return dp[i][t] = ret%mod;
}

int main()
{
    Limon();

    int _;cin>>_;
    for (int tc = 1; tc<=_; tc++)
    {
        cin>>n>>k;
        for(int i = 0; i<n; i++)cin>>c[i];
        for(int i = 0; i<n; i++)cin>>r[i];
        memset(dp,-1,sizeof(dp));
        cout<<"Case "<<tc<<": "<<solve(0,k)<<endl;
    }
}