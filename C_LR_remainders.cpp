#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
typedef vector<int>vi;

#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(k,n) for(auto i = k; i<n; i++)

void solve(){
    int n,m;
    cin>>n>>m;
    vi v(n);
    forn(0,n)cin>>v[i];

    string s; cin>>s;
    vi tm,ans;
    int l = 0, r = n-1;
    forn(0,n){
        if(s[i] == 'L'){
            tm.push_back(v[l]);
            l++;
        }else{
            tm.push_back(v[r]);
            r--;
        }
    }
    lli re = 1;
    for(int i = n-1; i>=0; i--){
        re *= tm[i];
        re %=m;
        ans.push_back(re);
    }
    for(int i = n-1; i>=0; i--){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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