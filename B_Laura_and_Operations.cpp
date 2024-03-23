#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

void print(int p, int x){
    if(p%2 == 0)cout<<1;
    else cout<<0;
}

void solve(){
    int x,y,z;cin>>x>>y>>z;
    int p,q,r;
    p = abs(y-z);
    q = abs(x-z);
    r = abs(x-y);
    
    print(p,x); cout<<" ";
    print(q,y); cout<<" ";
    print(r,z); cout<<endl;

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