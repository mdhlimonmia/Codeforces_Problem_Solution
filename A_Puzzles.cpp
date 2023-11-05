#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int p,n;cin>>p>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int df = INT16_MAX;
    for (int i = 0; i <= n-p; i++)
    {
        int a = arr[i+p - 1] - arr[i];
        df = min(df,a);
    }
    cout<<df<<endl;
    
}

int main()
{
    Limon();

    // int _;cin>>_;
    // while (_--)
    // {
       solve();
    // }
}