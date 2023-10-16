#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    string s; cin>>s;
    for (int i = 0; i < 9; i++)
    {
        if(s[i] == '1'){
            cout<<13<<endl;
            return;
        }
        else if( s[i] == '3'){
            cout<<31<<endl;
            return;
        }

    }
    
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
