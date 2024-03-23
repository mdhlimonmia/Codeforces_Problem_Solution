#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,k;cin>>n>>k;
    int x;
    int ans = INT32_MAX, e = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        int t = x%k;
        if(t == 0)t = k;
        ans = min(ans, k-t);
        if(x%2 == 0)e++;

    }
    if(k!=4 || n == 1)cout<<ans<<endl;
    else{
        cout<<max(0, min(2-e,ans))<<endl;
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