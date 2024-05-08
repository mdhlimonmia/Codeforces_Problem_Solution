#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n, t; cin>>t;
    vector<lli>f,s;
    while (t--)
    {   
        cin>>n;
        lli mn,mn2,x; mn = mn2 = LLONG_MAX;
        for(int i = 0; i<n; i++){
            cin>>x;
            // if(i == 0) mn = mn2 = x;
            if(x<mn){
                mn2 = mn; 
                mn = x;
            }else if(x<mn2) mn2 = x;
        }
        if(n == 1) mn2 = mn;
        f.push_back(mn);
        s.push_back(mn2);
        // cout<<mn<<" "<<mn2<<endl;
    }
    sort(f.begin(), f.end());
    sort(s.begin(), s.end());
    lli ans = 0;
    for(auto u:s)ans += u;
    ans -= s[0];
    ans += f[0];
    cout<<ans<<endl;
    f.clear();
    s.clear();
}

int main()
{
    // Limon();

     int _;cin>>_;
     while (_--)
     {
       solve();
     }
}