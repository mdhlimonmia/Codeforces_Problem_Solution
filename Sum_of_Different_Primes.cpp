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

const int mx = 1150;
bitset<mx> isPrime;
vector<int> primes;
int cntPrime[mx];
int n,k;
int dp[270][20][mx];
void primeGen ( int n )
{
    for ( int i = 3; i <= n; i += 2 ) isPrime[i] = 1;
    int sq = sqrt(n);
    for ( int i = 3; i <= sq; i += 2 ) {
        if(isPrime[i])
            for ( int j = i*i; j <= n; j += i )isPrime[j] = 0;
    }
    isPrime[2] = 1;
    primes.push_back(2);
    for ( int i = 3; i <= n; i += 2 ) {
        if(isPrime[i] == 1) {
            primes.push_back(i);
        }
    }
}

ll solve(int i, int j, int s){
    if(primes[i]>s || j>=k) return ( j == k && s == 0);
    if(dp[i][j][s]!= -1) return dp[i][j][s];
    ll ans = 0;
    ans += solve(i+1,j+1, s-primes[i]);
    ans += solve(i+1,j, s);
    return dp[i][j][s] = ans;
}


int main()
{
    Limon();
    primeGen(mx);
    while(cin>>n>>k){
        if(n == 0 && k == 0)break;
        memset(dp, -1, sizeof(dp));
        cout<<solve(0,0,n)<<endl;
    }
}