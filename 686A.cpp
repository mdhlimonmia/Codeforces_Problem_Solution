#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n,ice;cin>>n>>ice;
    char c; lli d, kid = 0;
    for (lli i = 0; i < n; i++)
    {
        cin>>c>>d;
        // cout<<c<<" "<<d<<endl;
        if(c == '+')ice+=d;
        else if(c == '-'){
            if(ice>=d)ice -=d;
            else kid++;
        }
    }
    cout<<ice<<" "<<kid<<endl;
    
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