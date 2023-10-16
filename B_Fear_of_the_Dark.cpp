#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
using ld = long double;

ld dist(pair<ld,ld>&a, pair<ld, ld>&b){
    return sqrt(pow((a.first-b.first),2) + pow((a.second - b.second),2));
}

void solve(){
    pair<ld,ld>p,a,b,o{0,0};
    cin>>p.first>>p.second>>a.first>>a.second>>b.first>>b.second;
    ld ans = min({
        max(dist(o,a),dist(a,p)),
        max(dist(o,b),dist(b,p)),
        max({dist(o,a), dist(p,b), dist(a,b)/2.0}),
        max({dist(o,b), dist(p,a), dist(a,b)/2.0})
    });
    printf("%.9lf\n",(double)ans);
    // cout<<ans<<endl;
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