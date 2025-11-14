///   ***   ---   |||    In the name of ALLAH    |||   ---   ***   ///

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 1e5+123;
vector<vector<ll>> v(mx, vector<ll>(4)), ans(mx, vector<ll>(4, -1));
ll dp(ll i, ll op){
    if(i<0) return 0;
    if(ans[i][op]!= -1)return ans[i][op];
    ll tem = 0;
    for(int j = 1; j<=3; j++){
        if(j == op)continue;
        tem = max(tem, dp(i-1, j)+v[i][j]);
    }
    return ans[i][op] = tem;
}
void solve(){
    ll n;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>v[i][1]>>v[i][2]>>v[i][3];
    }
    cout<<dp(n-1,0)<<endl;
}

int main()
{
    optimize();

    int _ = 1;
    // cin>>_;
    for (int tc = 1; tc<=_; tc++)
    {
        //cout<<"Case "<<tc<<": ";
        solve();
    }
}