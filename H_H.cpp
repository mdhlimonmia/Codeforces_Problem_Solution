#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int n,m;cin>>n>>m;
    string s,p; cin>>s>>p;
    int x = 0,y = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == p[i])x++;
    }
    int t = 0;
    for (int i = m-n; i <m; i++)
    {
        if(s[t] == p[i])y++;

        t++;
    }
    if(x == n && y == n)cout<<0<<endl;
    else if(x==n)cout<<1<<endl;
    else if(y == n)cout<<2<<endl;
    else cout<<3<<endl;
}