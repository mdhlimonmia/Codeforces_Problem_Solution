#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

#define f(n) (n*n + n)/2

void solve(){
    lli k; cin>>k;
    lli ans = -1, l = 1, r = 3e9;
    while (l<=r)
    {
        lli m = (l+r)/2;
        if(f(m) == k){
            ans = m;
            break;
        }else if(f(m)>k) r = m-1;
        else l = m+1;
    }
    if(ans == -1) cout<<"NAI\n";
    else cout<<ans<<endl;
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