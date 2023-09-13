#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int ans[40000];
int main()
{
    Limon();

    int _;cin>>_;
    while (_--)
    {
        int n; cin>>n;
        pair<int, int> arr[n];
        for(int i = 0; i<n; i++){
            cin>> arr[i].first;
            arr[i].second = i;
        }
        sort(arr, arr+n);

        int x = n, ans[n];
        for (int i = 0; i < n; i++)
        {
            ans[arr[i].second] = x--;
        }
        for(auto u : ans) cout << u << " ";
        cout<<endl; 
    }
    

}