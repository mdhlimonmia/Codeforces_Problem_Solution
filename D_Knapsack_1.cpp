//https://atcoder.jp/contests/dp/tasks/dp_d
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define yes cout<<"YES"
#define no cout<<"NO"
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

const ll mx = 1e5+123;
ll dp[123][mx];
int w[123], v[123];
int n, g;
ll solve(int i, int cw){
    if(i>n)return 0;
    if(dp[i][cw] != -1)return dp[i][cw];
    ll ret1 = 0, ret2 = 0;
    if(cw+w[i]<=g) ret1 = v[i]+ solve(i+1, cw+w[i]);
    ret2 = solve(i+1, cw);
    return dp[i][cw] = max(ret1,ret2);
}

int main()
{
    Limon();

    cin>>n>>g;
    for(int i = 1; i<=n; i++)cin>>w[i]>>v[i];
    memset(dp, -1, sizeof(dp));
    cout<<solve(1,0)<<endl;
}