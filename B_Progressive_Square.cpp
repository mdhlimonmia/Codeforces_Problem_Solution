#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double

void solve(){
    lli n,c,d, a = 1; cin >> n>>c>>d;
    vector<int>v(n*n), ans;
    // ans.push_back();
    lli m = LLONG_MAX;
    for(lli i = 0; i<(n*n); i++){
        cin>>v[i];
        m = (v[i]<m)?v[i]:m;
    }
    lli x,y;
    x = y = m;
    for (lli i = 0; i < n; i++)
    {   
        ans.push_back(x);
        for (lli j = 1; j < n; j++)
        {
            ans.push_back(y+d);
            y +=d;
        }
        y = x + c;
        x = y;
    }
    sort(v.begin(),v.end());
    sort(ans.begin(), ans.end());
    bool f = true;
    for(int i = 0; i<(n*n); i++){
        // cout<<ans[i]<<" "<<v[i]<<endl;
        if(ans[i] != v[i]){
            f = false;
            break;
        }
    }
    if(f)cout<<"YES\n";
    else cout<<"NO\n";
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