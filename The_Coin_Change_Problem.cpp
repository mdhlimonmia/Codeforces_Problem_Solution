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

int n,m;
vector<int>c(60);
ll dp[60][255];
ll solve(int i, int k){
    if(k==0 || i==m) return (k==0);
    if(dp[i][k] != -1) return dp[i][k];
    ll ret = 0;
    for(int j = 0; j*c[i]<=k; j++)ret += solve(i+1,k - j*c[i]);
    return dp[i][k] = ret;
}

int main()
{
    Limon();

    cin>>n>>m;
    for(int i = 0; i<m; i++)cin>>c[i];
    memset(dp, -1, sizeof(dp));
    cout<<solve(0,n)<<endl;
}