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
    string s;
    cin >> s;
    int sz = s.size();
    if ((s[sz - 1] - '0') % 2 == 0)
        cout << "0\n";
    else if ((s[0] - '0') % 2 == 0)
        cout << "1\n";
    else
    {
        bool k = 0;
        for (int i = 0; i < sz; i++)
        {
            if ((s[i] - '0') % 2 == 0)
            {
                k = 1;
                break;
            }
        }
        if (k)
            cout << "2\n";
        else
            cout << "-1\n";
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