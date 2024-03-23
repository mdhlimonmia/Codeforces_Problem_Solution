#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define lli long long int
#define cy cout << "YES\n"
#define cn cout << "NO\n"
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
            ans++;
        else
        {
            if (i != n - 1)
                swap(b[i], b[i + 1]);
        }
    }
    // sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
            k++;
        else
        {
            if (i != 0)
                swap(b[i], b[i + 1]);
        }
    }
    // cout << ans << " " << n - k << endl;
    if (ans >= x && n - k <= x)
        cy;
    else
        cn;
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