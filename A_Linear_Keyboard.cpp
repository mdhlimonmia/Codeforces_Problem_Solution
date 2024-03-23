#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = 0;
        string a, s;
        cin >> a >> s;
        for (int i = 1; i < s.size(); i++)
        {
            int p,q;
            p = a.find(s[i]);
            q = a.find(s[i-1]);
            x += abs(p-q);
        }
        cout << x << endl;
    }
}