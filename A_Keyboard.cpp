#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

void solve(){
    char d; cin>>d;
    string s,a;cin>>s;
    a = "qwertyuiopasdfghjkl;zxcvbnm,./";
    lli lz= s.size(), lx = a.size();
    for (lli i = 0; i < lz; i++)
    {
        for (lli j = 0; j < lx; j++)
        {
            if(s[i] == a[j])
            {
                if(d=='L')cout<<a[j+1];
                else cout<<a[j-1];
                break;
            }
        }
    }
    cout<<endl;
}

int main()
{
    Limon();

    // int _;cin>>_;
    // while (_--)
    // {
       solve();
    // }
}