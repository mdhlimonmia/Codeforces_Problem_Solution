#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    map<int,int>m;
    int mx = 0, ans = n, f = 0;
    for(int i = 0; i<n; i++){
        cin>>v[i];
        m[v[i]]++;
        if(m[v[i]]>mx)mx = m[v[i]];
        if(!f && mx>=(n+1)/2) f = 1;
        else if(f && m[v[i]]>=(n+1)/2)ans = (n/2)+1;
    }
    if(n%2 != 0 || n<4)cout<<n<<endl;
    // cout<<mx<<endl;
    else cout<<ans<<endl;
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