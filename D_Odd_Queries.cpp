#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
lli sarr[200005];
void solve(){
    int n,q;cin>>n>>q;
    int arr[n+1];
    lli s = 0;
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
        s += arr[i];
        sarr[i] = sarr[i-1];
        sarr[i] += arr[i];
        // cout<<i<<" "<<sarr[i]<<endl;
    }
    while (q--)
    {
        int l,r,k; cin>>l>>r>>k;
        lli tem = s - (sarr[r]-sarr[l-1]) +(r-l+1)*k;
        // cout<<tem<<endl;
        if(tem%2!=0)cout<<"YES\n";
        else cout<<"NO\n";
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