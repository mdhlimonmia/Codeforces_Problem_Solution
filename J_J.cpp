#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    string s, p;cin>>s>>p;
    cout<<s<<endl<<p<<endl;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if(s[i] == p[i])cout<<'.';
        else cout<<'*';
    }
    cout<<endl;
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