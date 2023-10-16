#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

void solve(){
    lli n,d;cin>>n>>d;
    lli arr[n];
    for (lli i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n,greater<>());
    if(arr[0]<= d || arr[n-1]+arr[n-2]<=d)cout<<"YES"<<endl;
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