#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n,x;cin>>n>>x;
    lli sum = 0, t = 2;
    while(n-x){
        sum += t;
        t<<=1;
        n--;
    }
    lli ans = t;
    while(x-1){
        t<<=1;
        ans+=t;
        x--;
    }
    cout<<ans-sum<<endl;
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