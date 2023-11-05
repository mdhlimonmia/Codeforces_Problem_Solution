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
     for (int i = 0; i < n-1; i++)
     {
        cin>>arr[i];
     }
     int a,b,ans = 0;
     cin>>a>>b;
     for (int i = a-1; i < b-1; i++)
     {
        ans +=arr[i];
     }
     cout<<ans<<endl;
     
}