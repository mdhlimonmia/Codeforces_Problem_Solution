#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n;cin>>n;
    map<int,int>m;
    int arr[n*2];
    for (int i = 0; i < n*2; i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    for (int i = 0; i <n*2; i++)
    {
        if(m[arr[i]] > 0)cout<<arr[i]<<" ";
        m[arr[i]] = 0;
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