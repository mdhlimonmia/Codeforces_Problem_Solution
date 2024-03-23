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
    pair<int, int> x, y, z;
    cin >> x.first >> x.second >> y.first >> y.second >> z.first >> z.second;
    int ans = 0;
    if ((x.first == z.first && x.first == y.first && ((x.second > z.second && y.second < z.second) || (x.second < z.second && y.second > z.second)))) ans = 2;
    if ((x.second == z.second && x.second == y.second && ((x.first > z.first && y.first < z.first) || (x.first < z.first && y.first > z.first)))) ans = 2;
    ans += abs(x.first - y.first);
    ans += abs(x.second - y.second);
    cout<<ans<<endl;
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