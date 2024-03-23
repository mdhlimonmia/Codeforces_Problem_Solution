#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define lli unsigned long long int
vector<lli> v;
void add(int y)
{
    lli p = pow(2, y);
    for (auto u : v)
    {
        v.push_back(u + p);
    }
    v.push_back(p);
}

void solve()
{
    int n;
    cin >> n;
    int x, y;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x == 1)
        {
            add(y);
        }
        else
        {
            if(find(v.begin(), v.end(), y) != v.end())
                cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}

int main()
{
    Limon();

    solve();
}
// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define Limon()                   \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define lli  long long int

// map<int,int> v;
// void add(int y)
// {
//     lli p = pow(2, y);
//     vector<lli>temp;
//     for (auto u : v)
//     {
//         lli k = u.first;
//         temp.push_back(k+p);
//     }
//     for(auto u:temp) v[u]++;
//     v[p]++;
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     int x, y;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> x >> y;
//         if (x == 1)
//         {
//             add(y);
//         }
//         else
//         {
//             if(v[y]>0)
//                 cout<<"YES\n";
//             else cout<<"NO\n";
//         }
//     }
// }

// int main()
// {
//     Limon();

//     solve();
// }