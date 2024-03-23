#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define lli long long int

int main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        int n;
        cin >> n;
        int t = n * 2 - 1;

        lli v[t + 1][n + 1];
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cin >> v[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {

            for (int j = 1; j <= n - i; j++)
            {
                cin >> v[n + i][j];
            }
        }

        // processing..............
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j == 1)
                    v[i][j] = v[i][j] + v[i - 1][1];
                else if (j == i)
                    v[i][j] = v[i][j] + v[i - 1][j - 1];
                else
                    v[i][j] = max(v[i][j] + v[i - 1][j - 1], v[i][j] + v[i - 1][j]);
            }
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                v[n + i][j] = max(v[n + i][j] + v[n + i - 1][j + 1], v[n + i][j] + v[n + i - 1][j]);
            }
        }
        cout << "Case " << tc << ": " << v[t][1] << endl;
    }
}