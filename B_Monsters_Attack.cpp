#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n),x(n);
    for(auto& it:a)cin>>it;
    for(auto& it:x)cin>>it;
    vector<lli>s(n+1);
    for(int i = 0; i<n; i++) s[abs(x[i])] += a[i];
    bool f = 1;
    long long t = 0;
    for(int i = 1; i<=n; i++){
        t += k - s[i];
        // f &= (t>=0); same thing
        if(t<0){
            f = 0;
            break;
        }
    }
    if(f)cout<<"YES\n";
    else cout<<"NO\n";
    
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