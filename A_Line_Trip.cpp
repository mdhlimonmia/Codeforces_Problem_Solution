#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,x; cin>>n>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int diff = arr[0], k = arr[0];
    for (int i = 1; i < n; i++)
    {
        int t = abs(arr[i] - arr[i-1]);
        diff = max(t,diff);
    }
    diff = max((x-arr[n-1])*2, diff);
    cout<<diff<<endl;
    
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