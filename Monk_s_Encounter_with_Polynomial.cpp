#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int a,b,c,k;

#define f(x) a*x*x + b*x + c

void solve(){
    cin>>a>>b>>c>>k;
    lli ans, l = 0, r = 1e5;
    while (l<=r)
    {
        lli m = (l+r)/2;
        if(f(m)>=k){
            ans = m;
            r = m-1;
        }else l = m+1;
    }
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