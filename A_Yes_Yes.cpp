#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define lli long long 
string t = "";
void solve()
{
    string s;
    cin >> s;
    if(t.find(s) != -1)cout<<"YES\n";
    else cout<<"NO\n";
}

int main()
{
    Limon();
    for(int i = 0; i<22; i++) t+="Yes";
    int _;
    cin >> _;
    while (_--)
    {
        solve();
    }
}