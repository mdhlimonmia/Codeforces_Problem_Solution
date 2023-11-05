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
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans = abs(arr[0] - arr[n-1]), x = 1, y = n;
    for (int i = 1; i < n; i++)
    {
        int k = abs(arr[i]-arr[i-1]);
        if(k<ans){
            ans = k;
            x = i+1;
            y = i;
        }
    }
    cout<<x<<" "<<y<<endl;
    
}