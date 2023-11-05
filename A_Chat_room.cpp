#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    string s, h;cin>>s;
    int sz = s.size();
    h = "hello";
    int k = 0;

    for (int i = 0; i < sz; i++)
    {
        if(s[i] == h[k])k++;
        if(k==5)break;
    }
    if(k==5)cout<<"YES\n";
    else cout<<"NO\n";
}