#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    string s; cin>>s;
    int l = s.size();
    int a = 0, b = 0;
    for (int i = 0; i < l; i++)
    {
        if(s[i] == 'A')a++;
        else b++;
    }
    if(a>b)cout<<"A\n";
    else cout<<"B\n";
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