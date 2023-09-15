#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void solve(){
    int n; cin>>n;
    vector<int>arr(n),arr1(n);
    for (int i = 0; i < n; i++) cin>>arr[i];
    arr1 = arr;
    sort(arr1.rbegin(), arr1.rend());
    for (int i = 0; i < n; i++)
    {
        int a = arr[i] - arr1[0];
        if(a == 0){
            a = arr[i] - arr1[1];
            cout<<a<<" ";
        }else cout<<a<<" ";
    }
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