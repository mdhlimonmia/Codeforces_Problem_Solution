#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define Limon()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define lli long long int
void solve()
{
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr+3);
    if(arr[2]-arr[1] == arr[0] || (arr[0] == arr[1] && arr[2]%2==0) || (arr[1]==arr[2] && arr[0]%2==0))cy;
    else cn;
}

int main()
{
    Limon();

    int _;
    cin >> _;
    while (_--)
    {
        solve();
    }
}