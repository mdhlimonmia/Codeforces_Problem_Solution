#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    int n;cin>>n;
    lli arr[n], l = LLONG_MIN, r = 0, t =1;
    for (int i = 0; i < n; i++)cin>>arr[i];
    for (int i = 1; i < n; i++){
        if(arr[i-1]>arr[i]){
            l = max(l,arr[i-1]);
            t=0;
            // cout<<r<<" "<<l<<endl;
        }
    }
    if(t)cout<<0<<endl;
    else cout<<l<<endl;

    
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