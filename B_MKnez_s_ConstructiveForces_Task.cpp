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
    if (n == 3)
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        if (n % 2 == 0)
        {
            int  x[]= {1,-1};
            for (int i = 0; i < n; i++) cout << x[i%2] << " ";
        }else{
            int x[] = {(n-2)/2, (n-1)/2 * -1};
            for (int i = 0; i < n; i++) cout<<x[i%2]<<" ";
        }
        cout << endl;
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