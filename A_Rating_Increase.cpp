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
    string s; cin>>s;
    int n = s.size();
    string a ="", b="";
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        a+=s[i];
        x++;
        if(s[i+1] != '0')break;
    }
    if(x==n){
        cout<<-1<<endl;
        return;
    }
    for (int i = x; i < n; i++)
    {
        b+=s[i];
    }

    int p = stoi(a);
    int y = stoi(b);
    if(p>=y || p==0 || y==0)cout<<-1<<endl;
    else cout<<p<<" "<<y<<endl;
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