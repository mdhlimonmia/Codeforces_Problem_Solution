#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n,a,b;cin>>n>>a>>b;
    if(a>b)cout<<"1\n";
    else cout<<(lli)(ceil(n/(a*1.0)))<<endl;
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