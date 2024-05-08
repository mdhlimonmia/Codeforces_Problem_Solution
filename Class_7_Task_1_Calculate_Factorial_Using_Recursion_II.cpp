#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define lli long long int

lli fac[100123];
lli m = 1000000007;
lli solve(int n)
{
    if(n==1 || n==0)return 1;
    if(fac[n] != 0) return fac[n];
    lli r = (n*(solve(n-1)%m))%m;
    return fac[n] = r;
}

int main()
{
    Limon();

    int _;
    cin >> _;
    while (_--)
    {
        int n;
        cin >> n;
        lli ans = solve(n);
        cout<<ans<<endl;
    }
}