#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    sort(arr, arr+n);
    vector<int>v;
    cout<<arr[0]<<" ";
    for (int i = 1; i < n; i++)
    {
        if(arr[i] != arr[i-1])cout<<arr[i]<<" ";
        else v.push_back(arr[i]);
    }
    for(auto u:v)cout<<u<<" ";
    cout<<endl;
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