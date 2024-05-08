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
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
        v[i]--;
    }
    int ans = 3;
    for(int i = 0; i<n; i++){
        if(v[v[i]] == i) ans = 2;
    }
    cout << ans << endl;
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