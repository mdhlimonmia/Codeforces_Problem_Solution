#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

bool ans(int n, int m){
    // cout<<"n :"<<n<<" m :"<<m<<endl;
    if(n==m)return 1;
    else if(n%3 != 0) return 0;
    else return ( ans(n/3,m) || ans((n/3)*2, m) );
}
void solve(){
    int n,m;cin>>n>>m;
    bool k = ans(n,m);
    if(k)cout<<"YES\n";
    else cout<<"NO\n";
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