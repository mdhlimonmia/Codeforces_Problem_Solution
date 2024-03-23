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
    string s;
    cin >> s;
    int on = 0, ze = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'n')
            on++;
        if (s[i] == 'z')
            ze++;
    }
    for (int i = 0; i < on; i++)
    {
        cout << 1 << " ";
    }
    for (int i = 0; i < ze; i++)
    {
        cout << 0 << " ";
    }
    cout << endl;
}

int main()
{
    Limon();

    solve();
}