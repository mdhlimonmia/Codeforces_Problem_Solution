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

ll n;
vector<ll>v[20];
map<pair<int,vector<int>>,ll>dp;

ll prio(int i , int j, vector<int>ind){
    if(i>n) return 0;
    pair<int,vector<int>> p;
    vector<int> k;
    k = ind;
    if(j!=-1)k[j]++;
    p = {i,k};
    if(dp[p]!=0)return dp[p];
    if(j!=-1)k[j] = 1;
    ll ans = 0;
    for(int y = 0; y<n; y++){
        if(k[y] == 0)ans = max(ans, v[i][y] + prio(i+1,y,k)); 
    }
    return dp[p] = ans;
}

void solve(int tc){
    cin>>n;
    // memset(dp,-1,sizeof(dp));
    dp.clear();
    for(int i = 1; i<=n; i++){
        v[i].clear();
        for(int j = 1; j<=n; j++){
            int x; cin>>x;
            v[i].push_back(x);
        }
    }
    // ll ans = 0;
    vector<int>ind(n+1);
    cout<<"Case "<<tc<<": "<<prio(1,-1,ind)<<endl;

}

int main()
{
    Limon();

    int _;cin>>_;
    for(int i = 1; i<=_; i++)
    {
        solve(i);
    }
}