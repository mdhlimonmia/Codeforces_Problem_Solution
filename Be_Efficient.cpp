#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int _;
    cin >> _;
    for (int t = 1; t <= _; t++)
    {
        int n, m;
        cin >> n >> m;
        vector<lli> v(n + 1), sum(n + 1), frq(m);
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        for (int i = 1; i <= n; i++)
            sum[i] = sum[i - 1] + v[i];
        frq[0]++;
        lli ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int x = sum[i] % m;
            ans += frq[x]++;
        }
        cout << "Case " << t << ": " << ans << endl;
    }
}