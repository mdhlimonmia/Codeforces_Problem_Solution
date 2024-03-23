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
    pair<int, int> p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    int mx = p[0].first;
    for (int i = 0; i < n - 1; i++)
    {
        mx = max(mx, min({abs(p[i].first - p[i + 1].first), abs(p[i].first - p[i + 1].second),
                          abs((p[i].first + p[i].second)/2 - p[i+1].first), abs((p[i].second + p[i].first)/2 - p[i+1].second)}));
    }
    cout << mx << endl;
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