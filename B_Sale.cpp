#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,m;cin>>n>>m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    lli sum = 0;
    for (int i = 0; i < m; i++)
    {
        if(arr[i]<0)sum+= (arr[i])*(-1);
    }
    cout<<sum<<endl;
    
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