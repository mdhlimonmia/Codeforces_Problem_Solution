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

const int mx = 3e3;
ll dp[mx][mx];
int s,n;
vector<pair<int,int>>v(mx);
ll solve(int i, int cw){
    if(i>n) return 0;
    if(dp[i][cw] != -1) return dp[i][cw];
    ll ret1 = 0, ret2 = 0;
    if(v[i].F + cw<=s) ret1 = v[i].S + solve(i+1, cw+v[i].F);
    ret2 = solve(i+1, cw);
    return dp[i][cw] = max(ret1, ret2);
}

int main()
{
    Limon();
    memset(dp, -1, sizeof(dp));
    cin>>s>>n;
    for(int i = 1; i<=n; i++){
        cin>>v[i].F>>v[i].S;
    }
    cout<<solve(1,0)<<endl;
}