///   ***   ---   |||    In the name of ALLAH    |||   ---   ***   ///

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mx = 1e5+123;
ll n,m;
vector<ll>v1(mx), v2(mx);
ll ans = 0;

void shortPath(int i , int j, int r){
    if(i==n && j==m)return;
    ll x = INT_MAX, y = INT_MAX;
    if(r==1){
        if(i+1<n) x = abs(v1[i+1] - v1[i]);
        else if(j==m)return;
        if(j<m) y = abs(v2[j] - v1[i])+1;
        
        if(x<y){
            ans +=x;
            shortPath(i+1, j, 1);
        }else{
            ans +=y;
            shortPath(i+1, j, 2);
        }
    }else{
        if(j+1<m) x = abs(v2[j+1] - v2[j]);
        else if(i==n)return;

        if(i<n)y = abs(v1[i] - v2[j]) + 1;

        if(x<y){
            ans +=x;
            shortPath(i, j+1, 2);
        }else{
            ans +=y;
            shortPath(i, j+1, 1);
        }
    }
}

void solve(){
    cin>>n>>m;
    for(int i = 0; i<n; i++) cin>>v1[i];
    for(int i = 0; i<m; i++) cin>>v2[i];

    ans = 0;
    if(v1[0] == 1) shortPath(0,0,1);
    else{
        ll x = abs(v1[0] - 1);
        ll y = v2[0];
        if(x<y){
            ans+=x;
            shortPath(0,0,1);
        }else{
            ans +=y;
            shortPath(0,0,2);
        }
    }
    cout<<ans<<endl;
}

int main()
{

    int _ = 1;
    cin>>_;
    for (int tc = 1; tc<=_; tc++)
    {
        solve();
    }
}