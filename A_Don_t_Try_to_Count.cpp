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
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    if (n == m)
    {
        if (s == x)
            cout << 0 << endl;
        else
        {
            x += x;
            int ans = 0;
            for (int i = 0; i < n+n; i++)
            {
                if (s[0] == x[i])
                {
                    int p = i + 1;
                    int j;
                    for (j = 1; j < m; j++)
                    {
                        if (s[j] != x[p++])
                            break;
                    }
                    if (j == m)
                    {
                        ans = 1;
                        break;
                    }
                }
            }
            if (ans == 0)
                cout << -1 << endl;
            else
                cout << 2 << endl;
        }
    }
    else
    {
        int k = 0;
        while (n < m)
        {
            x = x + x;
            k++;
            n += n;
        }
        // cout<<x<<" "<<s<<" "<<k;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[0] == x[i])
            {
                int p = i + 1;
                int j;
                for (j = 1; j < m; j++)
                {
                    if (s[j] != x[p++])
                        break;
                }
                if (j == m)
                {
                    ans = 1;
                    break;
                }
            }
        }
        if (ans == 0)
            cout << -1 << endl;
        else
            cout << k << endl;
    }
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