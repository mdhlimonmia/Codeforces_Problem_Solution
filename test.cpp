#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    double n,m;cin>>n>>m;
    cout<<(double)((n/__gcd(n,m))*m)<<endl;
}

int main()
{
    // Limon();

     int _;cin>>_;
     while (_--)
     {
       solve();
     }
}