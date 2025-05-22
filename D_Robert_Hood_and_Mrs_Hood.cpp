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

ll n,d,k;
ll fv(map<pll,ll>m,ll x){
    ll p = 0;
    for(auto u:m){
        if((u.F.F<=x || u.F.F<=x+d-1) && (u.F.S>=x || u.F.S>=x+d-1))p++;
        // if(((u.F.F<=x+d-1 && u.F.F>=x) || ((u.F.S<=x+d-1 && u.F.S>=x))))p++;
    }
    return p;
}
void solve(){
    map<pll, ll>m;
    cin>>n>>d>>k;
    ll u,v;
    for(ll i = 0; i<k; i++){
        cin>>u>>v;
        m[{u,v}]++;
    }
    ll mn = LLONG_MAX, mx = -1, a,b;
    for(int i = 1; i+d-1<=n; i++){
        ll x = fv(m,i);
    //    mn = min({mn,x,x.S});
    //    mx = max({mx,x.F,x.S});
        if(mn>x){
            mn = x;
            a = i;
        }
        if(mn>x){
            mn = x;
            a = i;
        }
        if(mx<x){
            mx = x;
            b = i;
        }
        if(mx<x){
            mx = x;
            b = i;
        }
    }
    cout<<b<<" "<<a<<endl;
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