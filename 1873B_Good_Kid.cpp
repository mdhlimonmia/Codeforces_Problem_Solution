#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n;cin>>n;
    lli arr[n];
    for (lli i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    arr[0] += 1;
    lli r  = 1;
    for(auto u:arr) r *=u;
    cout<<r<<endl;
    
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