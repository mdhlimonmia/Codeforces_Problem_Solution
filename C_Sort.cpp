#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
void solve(){
    ll n,k;cin>>n>>k;
    string a,b;
    cin>>a>>b;
    map<char,int>m;
    vector<int>sum(n+1);
    int ans = 0;
    for(int i = 0; i<n; i++){
        m[a[i]]++;
        if(m[b[i]]<=0)ans++;
        else{
            m[b[i]]--;
            ans = max(0,ans-1);
        }
        sum[i+1] = ans;
    }
    // for(auto u:sum) cout<<u<<" ";
    // cout<<endl;
    while (k--)
    {
        int l,r; cin>>l>>r;
        cout<<abs(sum[r]-sum[l-1])<<endl;
    }
    
    
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