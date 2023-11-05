#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli x,y,k;cin>>x>>y>>k;
    if(x>=y)cout<<x<<endl;
    else{
        if(x+k>=y)cout<<y<<endl;
        else{
            cout<<(x+k + (y-(x+k))*2)<<endl;
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