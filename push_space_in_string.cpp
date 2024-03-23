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
    string s, k = "EGYPT", ans = "";
    cin >> s;
    int x;
    x = s.size();
    for (int i = 0; i < x; i++)
    {
        if (s[i] == k[0] && s[i + 1] == k[1] && s[i + 2] == k[2] && s[i + 3] == k[3] && s[i + 4] == k[4])
        {
            ans += " ";
            i += 4;
        }
        else
            ans += s[i];
    }
    cout << ans << endl;
}

int main()
{
    Limon();

    solve();
}