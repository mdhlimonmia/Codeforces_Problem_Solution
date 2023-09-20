#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n;cin>>n;
    int arr[n]; for(int i = 0; i<n; i++)cin>>arr[i];
    sort(arr+1,arr+n);
    for (int i = 1; i < n; i++)
    {
        if(arr[0]<arr[i]){
            arr[0] += (arr[i] - arr[0] + 1)/2;
        }
    }
    cout<<arr[0]<<endl;
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