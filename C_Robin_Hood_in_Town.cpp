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

void solve(){
    ll n;cin>>n;
    vl v(n);
    ll s = 0, mx = 0;
    for(int i = 0; i<n; i++){
        cin>>v[i];
        s += v[i];
        mx = max(mx,v[i]);
    }
    if(n<3){
        cout<<"-1\n";
        return;
    }
    sort(all(v));
    ll tem = s;
    ll x = v[n/2];
    ll ans = x*n*2 + 1;
    ans = max(0LL, ans-s);    
    cout<<ans<<endl;
}

int main()
{
    Limon();

    int _;cin>>_;
    while (_--)
    {
        solve();
    }
}