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
    vector<int> a(n), b(n);
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }

    int l = INT_MAX, r = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (m[b[i]] == 0)
        {
            l = min(l, i);
            r = max(r, i);
        }
    }
    int findex = m[b[0]], lindex = m[b[n - 1]];
    int ans = 0;
    while (findex--)
    {
        bool fin = 0, key = 1;
        int k = 0, tmp = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[k] == a[i])
            {
                fin = 1;
            }
            if (fin && b[k] == a[i])
            {
                k++;
                tmp++;
            }
            else if (fin && b[k] != a[i])
            {
                if (k <= l)
                {
                    k = r + 1;
                    ans = max(ans, tmp);
                    key = 0;
                    while (b[k] != a[i] && k < n)
                    {
                        k++;
                    }
                    if (b[k] == a[i])
                    {
                        tmp++;
                        k++;
                    }
                }
                else
                {
                    if (key)
                        ans = max(ans, tmp);
                    else if (k == n)
                        ans = max(ans, tmp);

                    k = 0;
                    // cout<<tmp<<endl;
                    tmp = 0;
                    fin = 0;
                    i--;
                    key = 1;
                }
            }
        }
        if (key)
            ans = max(ans, tmp);
        else if (k == n)
            ans = max(ans, tmp);
    }

    // while(lindex--){
    //     bool fin = 0;
    //     int k = n-1, tmp = 0;
    //     for (int i = n-1; i > 0; i--)
    //     {
    //         if(b[k] == a[i]){
    //             fin = 1;
    //         }
    //         if(fin && b[k] == a[i]){
    //             k--;
    //             tmp++;
    //         }
    //         else if(fin && b[k] != a[i]){
    //             if(k>=r){
    //                 k = l-1;
    //                 ans = max(ans,tmp);
    //                 continue;
    //             }
    //             ans = max(ans,tmp);
    //             k = 0;
    //             // cout<<tmp<<endl;
    //             tmp = 0;
    //             fin = 0;
    //             i--;
    //         }
    //     }
    //     ans = max(ans,tmp);
    // }
    cout << n - ans << endl;
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