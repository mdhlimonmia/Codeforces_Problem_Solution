#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

     int n;cin>>n;
     int arr[n];
     for(int i = 0; i<n; i++)cin>>arr[i];
     sort(arr, arr+n);
     int mn, mx,mn1,mn2,mx1,mx2;
     cout<<abs(arr[0]-arr[1])<<" "<<abs(arr[0] - arr[n-1])<<endl;
     for (int i = 1; i < n-1; i++)
     {
        mn1 = abs(arr[i] - arr[i-1]);
        mn2 = abs(arr[i] - arr[i+1]);
        mx1 = abs(arr[i] - arr[0]);
        mx2 = abs(arr[i] - arr[n-1]);

        if(mn1>mn2)mn = mn2;
        else mn = mn1;
        
        if(mx1>mx2) mx = mx1;
        else mx = mx2;

        cout<<mn<<" "<<mx<<endl;
     }
    cout<<abs(arr[n-1]-arr[n-2])<<" "<<abs(arr[0] - arr[n-1])<<endl;

}