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

int const mx = 1130;
bitset<mx> isPrime;
vector<int> primes;
int cntPrime[mx];
ll n, k;
ll dp[260][mx][20];
void primeGen ( int n )
{
    for ( int i = 3; i <= n; i += 2 ) isPrime[i] = 1;
    int sq = sqrt(n);
    for ( int i = 3; i <= sq; i += 2 ) {
        if(isPrime[i]) {
            for ( int j = i*i; j <= n; j += i ) {
                isPrime[j] = 0;
            }
        }
    }
    primes.push_back(2);
    for ( int i = 3; i <= n; i += 2 ) {
        if(isPrime[i] == 1) {
            primes.push_back(i);
        }
    }
}


ll solve(int i, int pn, int val){
    if(primes[i]>n || pn==k || val>=n) return(pn==k && val==n);
    if(dp[i][val][pn] != -1) return dp[i][val][pn];
    int x = 0;
    x = solve(i+1, pn+1, primes[i]+val);
    x += solve(i+1, pn, val);
    return dp[i][val][pn] = x;
}

int main()
{
    Limon();
    primeGen(mx);
    while(cin>>n>>k){
        if(n == 0 && k == 0)break;
        memset(dp, -1, sizeof(dp));
        cout<<solve(0,0,0)<<endl;
    }
}