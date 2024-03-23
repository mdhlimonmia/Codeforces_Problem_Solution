#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n,m,x; cin>>n>>m>>x;
    x--;
    lli p = x/n;
    lli q = x%n;
    // cout<<p<<" "<<q<<endl;
    lli ans = m*q + p+1;
    cout<<ans<<endl;

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