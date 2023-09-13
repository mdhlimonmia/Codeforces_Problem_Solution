#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, n, k = 1;

        cin >> w >> h >> n;

        while (w % 2 == 0 || h % 2 == 0)
        {
            if (w % 2 == 0)
            {
                k *=2;
                w /= 2;
            }
            else
            {
                h /= 2;
                k *=2;
            }
        }
        if (k >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}