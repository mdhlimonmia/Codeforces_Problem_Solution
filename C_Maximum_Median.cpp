#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double
const int mx = 2e5+123;
lli n,k;
lli v[mx];

bool check(lli m){
    lli ans = 0;
    for(int i = n/2; i<n; i++){
        ans +=max((lli)0,m-v[i]);
    }
    return (k>=ans);
}

void solve(){
    cin>>n>>k;
    for(lli i = 0; i<n; i++)cin>>v[i];
    sort(v,v+n);
    // for(auto u:v)cout<<u<<" ";
    // cout<<endl;


    lli l = 0, r = 2e9, ans;
    while (l<=r)
    {
        lli m = (l+r)/2;
        if(check(m)){
            ans = m;
            l = m+1;
        }else r = m-1;
    }
    cout<<ans<<endl;
}

int main()
{
    Limon();
    // int _; cin >> _;
    // for(int i = 1; i<=_;i++) {
        solve();
    // }
    return 0;
}