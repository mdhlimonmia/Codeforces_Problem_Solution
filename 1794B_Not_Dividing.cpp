#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    Limon();

    int _;cin>>_;
    while (_--)
    {
        int n; cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(arr[i]== 1) arr[i]++;
        }
        for (int i = 1; i < n; i++)
        {
            if(arr[i]%arr[i-1] == 0) arr[i]++;
        }
        for(auto u:arr)cout<<u<<" ";
        cout<<endl;
    }
}