#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    lli arr[n];
    for (lli i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    lli ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans = max(ans,arr[i]*arr[i-1]);
    }
    cout<<ans<<endl;
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