#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int a,b,c,x,y; cin>>a>>b>>c>>x>>y;
    if(a<x && b<y && c<(x+y - a - b))cout<<"NO\n";
    else if(a>=x && b<y && c<(y-b)) cout<<"NO\n";
    else if(a<x && b>=y && c<(x-a)) cout<<"NO\n";
    else cout<<"YES\n";
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