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
    lli n;
    cin >> n;
    vector<lli> v(n);
    map<lli, lli> m;
    for (lli i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));
    lli sum = 0;
    for (it = v.begin(); it != v.end(); ++it){
        lli temp = (*it -1) * m[*it-1] + (*it + 1) * m[*it + 1];
        lli k = *it * m[*it];
        if(temp<=k){
            sum +=k;
            m[*it - 1] = 0;
            m[*it + 1] = 0;
            m[*it] = 0;
        }
    }
    for (it = v.end()-1; it >= v.begin(); --it){
        lli k = *it * m[*it];
            if(k != 0){
                sum +=k;
            m[*it - 1] = 0;
            m[*it + 1] = 0;
            m[*it] = 0;
            }
    }
    cout<<sum<<endl;
}

int main()
{
    Limon();

    solve();
}