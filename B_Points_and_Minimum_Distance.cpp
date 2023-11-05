#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n;cin>>n;
    lli arr[n+n];
    for (lli i = 0; i < n*2; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n*2);
    lli ans = 0;
    for (lli i = 1; i < n*2; i++)
    {
        if(i!=n)ans+= (arr[i]-arr[i-1]);
    }
    cout<<ans<<endl;
    for (lli i = 0, j = (2*n)-1; i<j; i++,j--)
    {
        cout<<arr[j]<<" "<<arr[i]<<endl;
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