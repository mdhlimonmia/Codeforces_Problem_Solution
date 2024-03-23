#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    lli ans = 0;
    for (int i = n-1; i>0; i--)
    {
        if(arr[i]<arr[i-1]){
            int x = arr[i], y = arr[i-1];
            ans++;
            while ((y+1)/2>x)
            {
                ans++;
                int temp = x;
                x = y;
                y = temp - y;
            }
            arr[i-1] = y/2;
        }
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