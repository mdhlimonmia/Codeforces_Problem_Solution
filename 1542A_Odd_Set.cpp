#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, p = 0, q = 0;
        cin >> n;
        for (int i = 0; i < n * 2; i++)
        {
            cin >> x;
            if (x % 2 == 0)
                p++;
            else
                q++;
        }

        if (p == n && q == n)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}