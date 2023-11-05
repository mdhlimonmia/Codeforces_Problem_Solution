#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    string s; cin>>s;
    int sz = s.size();
    int z =0,o =0;
    for (int i = 0; i < sz; i++)
    {
        if(s[i] == '1')o++;
        else z++;
    }
    int ans = min(o,z);
    if(ans%2 != 0)cout<<"DA\n";
    else cout<<"NET\n";
}

int main()
{
    Limon();

    int _;cin>>_;
    while (_--)
    {
       solve();
    }
}