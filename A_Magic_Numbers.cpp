#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    string s; cin>>s;
    int sz = s.size();
    for (int i = 0; i < sz; i++)
    {
        if(s[i] == '1' || (i!=0 && s[i] == '4' && (s[i-1] == '1' || ( i!=1 && s[i-2] == '1')))){}
        else{
            cn;
            return;
        }
    }
    cy;
}

int main()
{
    Limon();
    solve();
}