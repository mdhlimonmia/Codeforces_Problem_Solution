#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n;cin>>n;
    pair<int, int>arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].first;
        arr[i].second = i+1;
    }
    sort(arr, arr+n);
    // for(auto u:arr)cout<<u.second<<" ";
    int result = 0;
    int x = arr[0].second, y = arr[n-1].second;
    result = min({
        max(x,y),
        n+1 - min(x,y),
        x + n + 1 - y,
        y + n + 1 - x
    });
    cout<<result<<endl;
    
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