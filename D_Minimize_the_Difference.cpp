#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define Limon()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    ll t = sum / n, k = sum % n;
    // cout<<sum<<endl;
    ll mx = -1, mn = LLONG_MAX;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] > t)
        {
            v[i] += (v[i - 1] - t);
            v[i - 1] = t;
            if (k > 0)
            {
                ll p = ceil((k * 1.0) / (n - i));
                k -= p;
                v[i - 1] += p;
                //    cout<<p<<" ";
            }
        }
        else
        {
            k += (t - v[i - 1]);
            // cout<<"t"<<v[i-1]<<endl;
        }
        mx = max(mx,v[i-1]);
        mn = min(mn, v[i-1]);
    }

    mx = max(mx,v[n-1]);
    mn = min(mn, v[n-1]);
    ll ans = mx-mn - k;
    cout<<ans<<endl;
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