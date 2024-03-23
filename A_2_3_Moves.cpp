#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    if(n == 1)cout<<2<<endl;
    else if(n%3 == 0)cout<<n/3<<endl;
    else cout<<min((n/3 + 1), n/2)<<endl;
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