#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,al,bo; cin>>n>>al>>bo;
    vector<int>v(n);
    lli sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    // for(auto u:v)cout<<u<<" ";
    // cout<<endl;
    // cout<<"sum = "<<sum<<endl;
    lli ans = sum;
    for (int i = 0; i < bo; i++)
    {
        ans -= (v[i] * 2);
    }
    // cout<<"ans = "<<ans<<endl;
    for (int i = 0; i < al; i++)
    {
        // if(i>n)
        sum -= v[i];
        int bs = 0;
        for (int j = i+1; j <= bo+i; j++)
        {
            if(j>=n)break;
            bs += v[j];
            // cout<<v[j]<<" "<<bs<<endl;
        }
        bs += bs;
        // cout<<ans<<" "<<bs<<" "<<sum<<endl;
        if(ans > sum-bs)break;
        else ans = max(ans,sum-bs);
    }
    
    cout<<ans<<endl;
}

int main()
{
    Limon();
    int _; cin>>_;
    while (_--)
    {
        solve();
    }
         
}