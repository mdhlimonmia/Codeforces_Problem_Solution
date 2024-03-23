#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    int arr[n];
    lli s = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        s += arr[i];
    }
    if(s%n != 0) cout<<-1<<endl;
    else{
        int k = 0, avg = s/n;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>avg)k++;
        }
        cout<<k<<endl;
        
    }
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