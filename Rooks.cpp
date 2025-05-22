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

void solve(int tc){
    ll n,k;cin>>n>>k;
    if(k>n){
        cout<<"Case "<<tc<<": "<<"0\n";
        return;
    }
    ll t = k;
    ll f = 1;
    while(t){
        f *=t;
        t--;
    }
    ll ans = 1;
    while(k--){
        ll tem = __gcd(n*n,f);
        ans *= ((n*n)/tem);
        f/=tem;
        n--;
    }
    cout<<"Case "<<tc<<": "<<ans/f<<endl;
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