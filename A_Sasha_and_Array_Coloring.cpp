#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)cin>>arr[i];
    sort(arr, arr+n);
    int ans = 0;
    for (int i = 0, j = n-1; i<j; i++, j--)
    {
        ans += (arr[j]- arr[i]);
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