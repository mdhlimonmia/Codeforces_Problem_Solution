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

const int mx = 300;
int n,q,m,d;
vector<ll>lis(mx);
ll dp[mx][20][30];

ll solve(int i, int j, ll val){
    if(i>=n || j>=m) return(j==m && val == 0);
    if(dp[i][j][val] != -1) return dp[i][j][val]; 
    ll x = 0, k = val + lis[i];
    k%=d;
    if(k<0)k+=d;
    x = solve(i+1, j+1, k);
    x += solve(i+1, j, val);
    return dp[i][j][val] = x;
}

int main()
{
    Limon();
    int tc = 0;
    while (cin>>n>>q)
    {   
        tc++;
        if(n==0 && q==0)break;
        cout<<"SET "<<tc<<":\n";
        for(int i = 0; i<n; i++)cin>>lis[i];
        int t = 1;
        while (q--)
        {
            cin>>d>>m;

            memset(dp, -1, sizeof(dp));
            cout<<"QUERY "<<t<<": "<<solve(0,0,0)<<endl;
            t++;
        }
        
    }
    
    
}