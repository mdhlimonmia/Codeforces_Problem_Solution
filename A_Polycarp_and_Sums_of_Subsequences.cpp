#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int arr[7];
    for(int i = 0; i<7; i++)cin>>arr[i];
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[6] - arr[0] - arr[1]<<endl;
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