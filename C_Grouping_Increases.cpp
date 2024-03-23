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
    lli ans = 0,ans2 = 0;
    vector<int> v(n), v1, v2;
    int l1,l2;
    l1 = l2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] < v[i + 1])
        {
            v1.push_back(v[i]);
            l1++;
            ans2++;
        }
        else
        {
            v2.push_back(v[i]);
            l2++;
        }
    }
    v2.push_back(v[n-1]); l2++;
    for (int i = 0; i < l1-1; i++)
    {
        if(v1[i]<v1[i+1])ans++;
    }

    for (int i = 0; i < l2-1; i++)
    {
        if(v2[i]<v2[i+1])ans++;
    }
    if(ans2==1|| ans2==0)cout<<0<<endl;
    else cout<<min(ans,ans2-1)<<endl;
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