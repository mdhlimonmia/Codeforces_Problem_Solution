#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    lli n,k;cin>>n>>k;
    lli arr[n];
    for (lli i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if(n== 1){
        cout<<0<<endl;
        return;
    }
    sort(arr, arr+n);
    lli t= 1, l= LLONG_MIN;
    for (lli i = 1; i < n; i++)
    {
        if(arr[i] - arr[i-1]<=k)t++;
        else{
            l = max(l,t);
            t=1;
        }
    }
    l = max(l,t);
    // if(n-l == 1)cout<<2<<endl;
    // else cout<<n-l<<endl;
    cout<<n-l<<endl;
    
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