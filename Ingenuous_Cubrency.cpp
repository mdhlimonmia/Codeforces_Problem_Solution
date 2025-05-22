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
ll dp[25][20000];
ll solve(int i , int k){
    if(k==0 || i==22) return(k==0);
    if(dp[i][k]!=-1)return dp[i][k];
    ll ans = 0, t = i*i*i;
    for(int l = 0; l*t<=k; l++) ans += solve(i+1, k-t*l);
    return dp[i][k] = ans;
}

int main()
{
    Limon();
    memset(dp,-1,sizeof(dp));
    ll n;
    while (cin>>n)
    {
        cout<<solve(1,n)<<endl;
    }
    
}
