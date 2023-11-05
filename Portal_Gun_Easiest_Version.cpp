#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    int n, b;
    cin >> n >> b;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    if (b < n - 1)
    {
        cout << "NO";
    }
    else
    {

        int ans = 1, posi = 1;
        map<int, int> mp;
        mp[1]++;
        while (ans < n && b > 0)
        {
            int rm = 0;
            if (posi == v[posi])
                rm = 1;
            else
                rm = 2;

            posi = v[posi];
            if (mp.count(posi) == 0)
            {
                mp[posi]++;
                ans++;
                b--;
            }
            else
            {
                int i = 1;
                for (pair<int, int> pr : mp)
                {
                    if (pr.first != i)
                    {
                        break;
                    }
                    else
                        i++;
                }
                posi = i;
                mp[posi]++;
                ans++;
                b -= rm;
            }
        }
        if (ans == n)
            cout << "YES\n"
                 << b;
        else
            cout << "NO";
    }
    return 0;
}