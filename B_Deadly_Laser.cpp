#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,m,x,y,d;cin>>n>>m>>x>>y>>d;
    if((x+d>=n && y+d>=m) || (x-d<=1 && y-d<=1) || (x+d >= n && x-d <= 1) || (y+d >= m && y-d<=1))cout<<-1<<endl;
    else cout<<n+m-2<<endl;
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