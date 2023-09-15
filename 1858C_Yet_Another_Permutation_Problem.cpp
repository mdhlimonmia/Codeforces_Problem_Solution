#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n;cin>>n;
    int arr[n];
    int k = 0;
    for (int i = 1; i <= n; i+=2){
        for (int j = i; j <=n; j*=2)
        {
            arr[k++] = j;
        }
        
    }
    for(auto u:arr)cout<<u<<" ";
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