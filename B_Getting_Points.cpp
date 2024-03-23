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
    lli n, p, l, t;
    cin >> n >> p >> l >> t;
    n--;
    lli k = n / 7;
    k++;
    lli tem = k / 2;
    if (k % 2 == 0)
        k = 0;
    else
        k = 1;

    lli d = 0;
    n++;

    lli x = tem * (l + t + t);
    if (p < x)
    {
        while (p > 0 && tem--)
        {
            p -= (l + t + t);
            d++;
            // cout<<d<<" "<<p<<endl;
        }
    }
    else
    {
        p -= x;
        d += tem;
    }
    if (p <= 0)
    {
        if (n - d < 0)
            cout << 0 << endl;
        else
            cout << n - d << endl;
    }
    else
    {
        if (k != 0)
        {
            p -= (l + t);
            d++;
        }
        if (p <= 0)
        {
            if (n - d < 0)
                cout << 0 << endl;
            else
                cout << n - d << endl;
        }
        else
        {
            lli td = (p / l);
            if (p % l != 0)
                td++;
            d += td;
            {
                if (n - d < 0)
                    cout << 0 << endl;
                else
                    cout << n - d << endl;
            }
        }
    }
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