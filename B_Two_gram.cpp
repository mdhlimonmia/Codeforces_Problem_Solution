#include <bits/stdc++.h>
#include <map>
using namespace std;
#define endl '\n'
#define Limon()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define lli long long int

int main()
{
    int n;
    cin >> n;
    string s, a;
    cin >> s;
    map<string, int> m;
    for (int i = 1; i < n; i++)
    {
        a += s[i - 1];
        a += s[i];
        m[a]++;
        a.clear();
    }
    
    map<string, int>::iterator it = m.begin();
    string ans;
    int an = 0;
    while (it != m.end())
    {
        if (it->second > an)
        {
            an = it->second;
            ans = it->first;
        }
        ++it;
    }

    cout << ans << endl;

    return 0;
}
