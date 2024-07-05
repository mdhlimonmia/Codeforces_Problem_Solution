#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double

void solve(){
    lli n,k; cin >> n>>k;
    lli l = 1, r = k, ans;
    while (l<r)
    {
        lli m = l*r;
        if(m%k == 0){
            ans = ceil(m/(n*1.0));
            r = m - 1;
        }else l = m + 1;
    }
     cout<<ans<<endl;
}

int main()
{
    Limon();
    int _; cin >> _;
    for(int i = 1; i<=_;i++) {
        solve();
    }
    return 0;
}