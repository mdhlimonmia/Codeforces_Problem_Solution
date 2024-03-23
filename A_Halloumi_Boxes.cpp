#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,k;cin>>n>>k;
    int arr[n], t = 0;
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(i!=0 && arr[i]<arr[i-1])t=1;
    }
    if(k>1 || t==0)cout<<"YES\n";
    else cout<<"NO\n";
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