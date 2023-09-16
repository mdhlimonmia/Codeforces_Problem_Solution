#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    sort(arr, arr+n);
    cout<<(arr[n-1]+arr[n-2] - arr[0]- arr[1])<<endl;
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