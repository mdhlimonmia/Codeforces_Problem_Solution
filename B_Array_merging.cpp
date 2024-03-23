#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> v1(n), v2(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < n; i++)
        cin >> v2[i];
    
    vector<int>arr1(n+n+1),arr2(n+n+1);
    int k = 1;
    for (int i = 1; i < n; i++)
    {
        if (v1[i] != v1[i - 1])
        {
            arr1[v1[i-1]] = max(arr1[v1[i-1]], k);

            k = 1;
        }
        else
            k++;
    }
    arr1[v1[n-1]] = max(arr1[v1[n-1]], k);

    k = 1;
    for (int i = 1; i < n; i++)
    {
        if (v2[i] != v2[i - 1])
        {
            arr2[v2[i-1]] = max(arr2[v2[i-1]], k);
            k = 1;
        }
        else
            k++;
    }
    arr2[v2[n-1]] = max(arr2[v2[n-1]], k);


    int ans = 0;
    for (int i = 0; i <= n+n; i++)
    {
        ans = max(ans, arr1[i] + arr2[i]); 
    }
    cout << ans << endl;
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