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

lli dsum(lli n)
{
    string s = to_string(n);
    lli lz = s.size();
    lli sum = 0;
    for (auto u : s)
        sum += u - '0';
    if (to_string(sum).size() == 1)
        return 1;
    return sum;
}

int main()
{
    Limon();
    string s;
    cin >> s;
    int n = 0, lz = s.size();
    if (lz == 1)
        cout << 0 << endl;
    else
    {
        for (int i = 0; i < lz; i++)
        {
            n += s[i] - '0';
        }
        if (to_string(n).size() == 1)
            cout << 1 << endl;
        else
        {
            lli k = 2;
            while (dsum(n) != 1)
            {
                k++;
                n = dsum(n);
            }
            cout << k << endl;
        }
    }
    // cout<<n<<endl;
}